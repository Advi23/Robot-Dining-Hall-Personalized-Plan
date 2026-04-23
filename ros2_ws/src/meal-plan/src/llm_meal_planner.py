import os
import re
import requests
import json
import pyttsx3
from datetime import date
from pathlib import Path
from urllib.parse import quote

# ── Load env ──────────────────────────────────────────
env_path = Path(__file__).resolve().parents[4] / 'keyspt2.env'
if env_path.exists():
    with open(env_path) as f:
        for line in f:
            if line.strip() and not line.startswith('#') and '=' in line:
                key, val = line.strip().split('=', 1)
                os.environ[key.strip()] = val.strip().strip('\'"')

SUPABASE_URL = os.environ.get('SUPABASE_URL', '')
SUPABASE_KEY = os.environ.get('SUPABASE_KEY', '')
OPENROUTER_API_KEY = os.environ.get('OPENROUTER_API_KEY', '')

SUPABASE_HEADERS = {
    'apikey': SUPABASE_KEY,
    'Authorization': f'Bearer {SUPABASE_KEY}',
}

# Fallback location nums for HTML scrape (used if Supabase tables not yet set up)
LOCATION_NUMS = {
    'Kins Dining': '03',
    'J2 Dining':   '12',
    'JCL Dining':  '13',
}

PROMPT_TEMPLATE = """
You are a helpful dining assistant robot at UT Austin. A student has shared their preferences below. Using ONLY the menu items listed, recommend a specific meal for them — name the station and the exact dishes. Be brief and conversational since this will be read aloud by a robot.

Student Preferences:
{user_preferences}

Today's Menu at {dining_hall} ({today}):
{menu_text}
"""


# ── Fetch user preferences ────────────────────────────

def fetch_latest_preference():
    print("Fetching latest preferences from Supabase...")
    url = f"{SUPABASE_URL}/rest/v1/dining_preferences?select=*&order=created_at.desc&limit=1"
    resp = requests.get(url, headers=SUPABASE_HEADERS)
    if resp.status_code == 200:
        data = resp.json()
        if data:
            return data[0]
        print("No preferences found.")
    else:
        print(f"Error fetching preferences: {resp.status_code} - {resp.text}")
    return None


# ── Fetch today's menu ────────────────────────────────

def fetch_todays_menu(dining_hall='Kins Dining'):
    """
    Reads today's structured menu from the today_menu Supabase view,
    filtered to the student's chosen dining hall.
    Falls back to live HTML scraping if the view is empty or not yet set up.
    """
    print(f"Fetching today's menu for {dining_hall} from Supabase...")
    url = (
        f"{SUPABASE_URL}/rest/v1/today_menu"
        f"?select=*&location=eq.{quote(dining_hall)}"
    )
    resp = requests.get(url, headers=SUPABASE_HEADERS)

    if resp.status_code == 200 and resp.json():
        return _format_menu_rows(resp.json()), dining_hall

    print("  Supabase menu empty or schema not set up — falling back to live HTML scrape.")
    return _fallback_scrape_menu(dining_hall), dining_hall


def _format_menu_rows(rows):
    """
    Convert today_menu rows into clean structured text for the LLM.
    Format:  • Item Name [Vegan] [Contains Wheat] — 320 cal
    """
    # Preserve category display order
    categories = {}
    for row in rows:
        key = (row.get('category_order', 0), row['category'])
        categories.setdefault(key, []).append(row)

    lines = []
    for (_, cat_name), items in sorted(categories.items()):
        lines.append(f"\n{cat_name}:")
        for item in items:
            tags = []
            if item.get('is_vegan'):        tags.append('Vegan')
            if item.get('is_vegetarian'):   tags.append('Vegetarian')
            if item.get('is_halal'):        tags.append('Halal')
            if item.get('has_peanuts'):     tags.append('Peanuts')
            if item.get('has_tree_nuts'):   tags.append('Tree Nuts')
            if item.get('has_milk'):        tags.append('Dairy')
            if item.get('has_wheat'):       tags.append('Wheat')
            if item.get('has_eggs'):        tags.append('Eggs')
            if item.get('has_shellfish'):   tags.append('Shellfish')
            if item.get('has_soy'):         tags.append('Soy')
            if item.get('has_beef'):        tags.append('Beef')
            if item.get('has_pork'):        tags.append('Pork')

            tag_str = f" [{', '.join(tags)}]" if tags else ''
            cal_str = f" — {item['calories']} cal" if item.get('calories') else ''
            lines.append(f"  • {item['item']}{tag_str}{cal_str}")

    return '\n'.join(lines)


def _fallback_scrape_menu(dining_hall='Kins Dining'):
    """Scrape raw HTML directly from FoodPro as a fallback."""
    loc_num = LOCATION_NUMS.get(dining_hall, '03')
    loc_name_url = dining_hall.replace(' ', '+')
    url = (
        f"https://hf-foodpro.austin.utexas.edu/foodpro/shortmenu.aspx"
        f"?sName=University+Housing+and+Dining"
        f"&locationNum={loc_num}&locationName={loc_name_url}&naFlag=1"
    )
    try:
        resp = requests.get(url, timeout=15)
        if resp.status_code == 200:
            text = re.sub(r'<style.*?>.*?</style>', '', resp.text, flags=re.IGNORECASE | re.DOTALL)
            text = re.sub(r'<script.*?>.*?</script>', '', text, flags=re.IGNORECASE | re.DOTALL)
            text = re.sub(r'<[^>]+>', ' ', text)
            text = re.sub(r'\s+', ' ', text).strip()
            return text[:10000]
    except Exception as e:
        print(f"Fallback scrape failed: {e}")
    return "Menu data unavailable."


# ── Generate meal plan ────────────────────────────────

def generate_meal_plan(user_data, menu_text, dining_hall):
    print("Generating meal plan with OpenRouter...")
    form = user_data.get('form_data', user_data)
    preferences_str = json.dumps(form, indent=2)

    prompt = PROMPT_TEMPLATE.format(
        user_preferences=preferences_str,
        menu_text=menu_text,
        dining_hall=dining_hall,
        today=date.today().strftime('%A, %B %d, %Y'),
    )

    headers = {
        "Authorization": f"Bearer {OPENROUTER_API_KEY}",
        "HTTP-Referer": "http://localhost:3000",
        "X-Title": "DiningHallBot",
        "Content-Type": "application/json",
    }
    payload = {
        "model": "openrouter/auto",
        "messages": [
            {
                "role": "system",
                "content": (
                    "You are a friendly dining assistant robot at UT Austin. "
                    "Keep responses short and conversational — they will be read aloud."
                ),
            },
            {"role": "user", "content": prompt},
        ],
    }

    resp = requests.post("https://openrouter.ai/api/v1/chat/completions", headers=headers, json=payload)
    if resp.status_code == 200:
        return resp.json()['choices'][0]['message']['content']
    print(f"OpenRouter error: {resp.status_code} - {resp.text}")
    return None


# ── Text-to-speech ────────────────────────────────────

def speak(text):
    print("\n--- Robot Output ---")
    print(text)
    print("--------------------\n")
    print("Speaking...")
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()


# ── Main ──────────────────────────────────────────────

def main():
    user_data = fetch_latest_preference()
    if not user_data:
        print("Could not retrieve user preferences. Exiting.")
        return

    print(f"Got preferences (saved: {user_data.get('created_at', 'unknown')})")

    # Pull dining hall selection from the form submission
    form = user_data.get('form_data', user_data)
    dining_hall = form.get('dining_hall', 'Kins Dining')
    print(f"Dining hall: {dining_hall}")

    menu_text, dining_hall = fetch_todays_menu(dining_hall)
    if not menu_text:
        print("Could not retrieve menu. Exiting.")
        return

    meal_plan = generate_meal_plan(user_data, menu_text, dining_hall)
    if not meal_plan:
        print("Failed to generate meal plan. Exiting.")
        return

    speak(meal_plan)


if __name__ == "__main__":
    main()
