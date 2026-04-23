"""
UT Dining Hall Scraper
Scrapes today's menu from UT FoodPro longmenu pages and stores structured
data (categories, food items, allergens) in Supabase.

Run manually or schedule via cron at 1:00 AM CST daily:
    0 7 * * * /usr/bin/python3 /path/to/scraper.py

Usage:
    python scraper.py
    python scraper.py --date 2026-04-23   # scrape a specific date
    python scraper.py --nutrition          # also fetch nutrition detail pages
"""

import os
import re
import sys
import time
import argparse
import requests
from datetime import date, datetime
from pathlib import Path
from bs4 import BeautifulSoup

# ── Load env ──────────────────────────────────────────
env_path = Path(__file__).resolve().parents[1] / 'keyspt2.env'
if env_path.exists():
    with open(env_path) as f:
        for line in f:
            line = line.strip()
            if line and not line.startswith('#') and '=' in line:
                key, val = line.split('=', 1)
                os.environ[key.strip()] = val.strip().strip('\'"')

SUPABASE_URL = os.environ.get('SUPABASE_URL', '')
SUPABASE_KEY = os.environ.get('SUPABASE_KEY', '')

if not SUPABASE_URL or not SUPABASE_KEY:
    print("ERROR: SUPABASE_URL and SUPABASE_KEY must be set in keyspt2.env")
    sys.exit(1)

SB_HEADERS = {
    'apikey': SUPABASE_KEY,
    'Authorization': f'Bearer {SUPABASE_KEY}',
    'Content-Type': 'application/json',
    'Prefer': 'return=representation',
}

# ── UT Dining locations ───────────────────────────────
BASE_URL = "https://hf-foodpro.austin.utexas.edu/foodpro"

LOCATIONS = [
    {"num": "03", "name": "Kins Dining"},
    {"num": "12", "name": "J2 Dining"},
    {"num": "13", "name": "JCL Dining"},
]

# Maps FoodPro allergen image filenames → Supabase column names
ALLERGEN_MAP = {
    'beef':      'has_beef',
    'eggs':      'has_eggs',
    'egg':       'has_eggs',
    'fish':      'has_fish',
    'milk':      'has_milk',
    'peanuts':   'has_peanuts',
    'pork':      'has_pork',
    'shellfish': 'has_shellfish',
    'soy':       'has_soy',
    'tree_nuts': 'has_tree_nuts',
    'wheat':     'has_wheat',
    'sesame':    'has_sesame',
    'vegan':     'is_vegan',
    'veggie':    'is_vegetarian',
}


# ── HTTP helpers ──────────────────────────────────────

def fetch_html(url, retries=3, timeout=15):
    for attempt in range(retries):
        try:
            resp = requests.get(url, timeout=timeout)
            resp.raise_for_status()
            return resp.text
        except Exception as e:
            if attempt == retries - 1:
                raise
            wait = 2 ** attempt
            print(f"  Retry {attempt + 1}/{retries} after {wait}s ({e})")
            time.sleep(wait)


# ── Menu parser ───────────────────────────────────────

def parse_allergens(row):
    """Extract allergen flags from img src filenames in a table row."""
    flags = {}
    for img in row.find_all('img'):
        filename = re.sub(r'\.\w+$', '', img.get('src', '').split('/')[-1]).lower()
        col = ALLERGEN_MAP.get(filename)
        if col:
            flags[col] = True
    return flags


def parse_longmenu(html):
    """
    Parse FoodPro longmenu.aspx HTML into structured category/item data.

    The page lists divs in document order:
      .longmenucolmenucat  → category header (e.g. "-- Comfort Table --")
      .longmenucoldispname → food item row with link + allergen icons in parent <tr>

    Returns: [{'name': str, 'order': int, 'items': [{'name', 'url', 'allergens'}]}]
    """
    soup = BeautifulSoup(html, 'html.parser')
    categories = []
    current_cat = None
    order = 0

    for div in soup.find_all('div'):
        cls = div.get('class', [])

        if 'longmenucolmenucat' in cls:
            name = re.sub(r'^[-\s]+|[-\s]+$', '', div.get_text(strip=True)).strip()
            if name:
                current_cat = {'name': name, 'order': order, 'items': []}
                categories.append(current_cat)
                order += 1

        elif 'longmenucoldispname' in cls and current_cat is not None:
            link = div.find('a')
            if not link:
                continue

            item_name = link.get_text(strip=True)
            if not item_name:
                continue

            item_href = link.get('href', '')
            if item_href and not item_href.startswith('http'):
                item_href = f"{BASE_URL}/{item_href.lstrip('/')}"

            # Allergen icons live in sibling cells of the same <tr>
            parent_row = div.find_parent('tr')
            allergens = parse_allergens(parent_row) if parent_row else {}

            current_cat['items'].append({
                'name': item_name,
                'url': item_href,
                'allergens': allergens,
            })

    return categories


def scrape_nutrition(item_url):
    """
    Scrape the nutrition label page (label.aspx) for a food item.
    Uses the same selectors as the UT Dining TypeScript scraper.
    Returns a dict of nutrition fields or {} on failure.
    """
    if not item_url:
        return {}
    try:
        html = fetch_html(item_url)
        soup = BeautifulSoup(html, 'html.parser')

        def get_nutrient(label):
            for el in soup.select('.nutfactstopnutrient'):
                if label.lower() in el.get_text().lower():
                    m = re.search(r'([\d.]+\s*[a-zA-Zμ]+)', el.get_text())
                    return m.group(0) if m else None
            return None

        cal_el      = soup.select_one('.nutfactscaloriesval')
        serving_els = soup.select('.nutfactsservsize')
        ing_el      = soup.select_one('.labelingredientsvalue')

        return {k: v for k, v in {
            'calories':    cal_el.get_text(strip=True) if cal_el else None,
            'serving_size': serving_els[1].get_text(strip=True) if len(serving_els) > 1 else None,
            'total_fat':   get_nutrient('Total Fat'),
            'total_carbs': get_nutrient('Total Carbohydrate'),
            'protein':     get_nutrient('Protein'),
            'ingredients': ing_el.get_text(strip=True) if ing_el else None,
        }.items() if v}
    except Exception as e:
        print(f"    Nutrition fetch failed: {e}")
        return {}


# ── Supabase REST helpers ─────────────────────────────

def sb_upsert(table, payload, on_conflict):
    resp = requests.post(
        f"{SUPABASE_URL}/rest/v1/{table}",
        headers={**SB_HEADERS, 'Prefer': 'resolution=merge-duplicates,return=representation'},
        params={'on_conflict': on_conflict},
        json=payload,
    )
    resp.raise_for_status()
    return resp.json()


def sb_insert(table, payload):
    resp = requests.post(
        f"{SUPABASE_URL}/rest/v1/{table}",
        headers=SB_HEADERS,
        json=payload,
    )
    resp.raise_for_status()
    return resp.json()


def sb_delete(table, params):
    resp = requests.delete(
        f"{SUPABASE_URL}/rest/v1/{table}",
        headers=SB_HEADERS,
        params=params,
    )
    resp.raise_for_status()


# ── Main scrape & store ───────────────────────────────

def scrape_location(location, target_date, fetch_nutrition=False):
    loc_num  = location['num']
    loc_name = location['name']
    date_str = target_date.isoformat()
    date_fmt = target_date.strftime('%m/%d/%Y')  # FoodPro wants MM/DD/YYYY

    url = (
        f"{BASE_URL}/longmenu.aspx"
        f"?sName=University+Housing+and+Dining"
        f"&locationNum={loc_num}"
        f"&locationName={loc_name.replace(' ', '+')}"
        f"&naFlag=1"
        f"&WeeksMenus=This+Week%27s+Menus"
        f"&myaction=read"
        f"&dtdate={date_fmt}"
    )

    print(f"\n[{loc_name}] Fetching {date_str}...")
    try:
        html = fetch_html(url)
    except Exception as e:
        print(f"  FAILED: {e}")
        return 0

    categories = parse_longmenu(html)
    total_items = sum(len(c['items']) for c in categories)

    if not categories or total_items == 0:
        print("  No menu data found — dining hall may be closed today.")
        return 0

    print(f"  Parsed {len(categories)} categories, {total_items} items.")

    # 1. Upsert location record
    rows = sb_upsert('dining_locations', {'location_num': loc_num, 'name': loc_name}, 'location_num')
    location_id = rows[0]['id']

    # 2. Upsert menu record for (location, date)
    rows = sb_upsert(
        'dining_menus',
        {'location_id': location_id, 'date': date_str, 'scraped_at': datetime.utcnow().isoformat()},
        'location_id,date',
    )
    menu_id = rows[0]['id']

    # 3. Delete stale categories (cascades to food_items)
    sb_delete('menu_categories', {'menu_id': f'eq.{menu_id}'})

    # 4. Insert fresh categories + items
    for cat in categories:
        cat_rows = sb_insert('menu_categories', {
            'menu_id': menu_id,
            'name': cat['name'],
            'display_order': cat['order'],
        })
        cat_id = cat_rows[0]['id']

        for item in cat['items']:
            nutrition = scrape_nutrition(item['url']) if fetch_nutrition else {}
            sb_insert('food_items', {
                'category_id': cat_id,
                'name': item['name'],
                'item_url': item['url'],
                **item['allergens'],
                **nutrition,
            })

        print(f"  ✓ {cat['name']} ({len(cat['items'])} items)")

    return total_items


def main():
    parser = argparse.ArgumentParser(description='Scrape UT dining menus into Supabase.')
    parser.add_argument('--date', help='Date to scrape (YYYY-MM-DD), defaults to today')
    parser.add_argument('--nutrition', action='store_true', help='Also fetch nutrition detail pages (slower)')
    args = parser.parse_args()

    target_date = date.fromisoformat(args.date) if args.date else date.today()
    print(f"=== UT Dining Scraper — {target_date} ===")

    total = 0
    for loc in LOCATIONS:
        count = scrape_location(loc, target_date, fetch_nutrition=args.nutrition)
        total += count

    print(f"\nDone. {total} food items stored in Supabase for {target_date}.")


if __name__ == '__main__':
    main()
