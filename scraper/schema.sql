-- ============================================================
-- UT Dining Hall Scraper Schema
-- Run this entire file in your Supabase SQL Editor once.
-- ============================================================

-- 1. Dining locations (Kins, J2, JCL, etc.)
CREATE TABLE IF NOT EXISTS dining_locations (
    id          SERIAL PRIMARY KEY,
    location_num TEXT   UNIQUE NOT NULL,
    name        TEXT   NOT NULL,
    created_at  TIMESTAMPTZ DEFAULT NOW()
);

-- Seed the known UT dining halls
INSERT INTO dining_locations (location_num, name) VALUES
    ('03', 'Kins Dining'),
    ('12', 'J2 Dining'),
    ('13', 'JCL Dining')
ON CONFLICT (location_num) DO NOTHING;

-- 2. One menu record per location per day
CREATE TABLE IF NOT EXISTS dining_menus (
    id          SERIAL PRIMARY KEY,
    location_id INTEGER REFERENCES dining_locations(id) ON DELETE CASCADE,
    date        DATE    NOT NULL,
    scraped_at  TIMESTAMPTZ DEFAULT NOW(),
    UNIQUE (location_id, date)
);

-- 3. Menu sections/categories (e.g. "Comfort Table", "Texas Grill")
CREATE TABLE IF NOT EXISTS menu_categories (
    id            SERIAL PRIMARY KEY,
    menu_id       INTEGER REFERENCES dining_menus(id) ON DELETE CASCADE,
    name          TEXT NOT NULL,
    display_order INTEGER DEFAULT 0
);

-- 4. Individual food items
CREATE TABLE IF NOT EXISTS food_items (
    id           SERIAL PRIMARY KEY,
    category_id  INTEGER REFERENCES menu_categories(id) ON DELETE CASCADE,
    name         TEXT NOT NULL,
    -- Dietary flags
    is_vegan        BOOLEAN DEFAULT FALSE,
    is_vegetarian   BOOLEAN DEFAULT FALSE,
    is_halal        BOOLEAN DEFAULT FALSE,
    -- Allergen flags
    has_beef        BOOLEAN DEFAULT FALSE,
    has_pork        BOOLEAN DEFAULT FALSE,
    has_eggs        BOOLEAN DEFAULT FALSE,
    has_milk        BOOLEAN DEFAULT FALSE,
    has_fish        BOOLEAN DEFAULT FALSE,
    has_shellfish   BOOLEAN DEFAULT FALSE,
    has_tree_nuts   BOOLEAN DEFAULT FALSE,
    has_peanuts     BOOLEAN DEFAULT FALSE,
    has_soy         BOOLEAN DEFAULT FALSE,
    has_wheat       BOOLEAN DEFAULT FALSE,
    has_sesame      BOOLEAN DEFAULT FALSE,
    -- Nutrition (populated if detail page is scraped)
    calories    TEXT,
    protein     TEXT,
    total_carbs TEXT,
    total_fat   TEXT,
    serving_size TEXT,
    ingredients TEXT,
    item_url    TEXT
);

-- 5. Flat view used by the LLM planner — always shows today's data
CREATE OR REPLACE VIEW today_menu AS
SELECT
    dl.name                 AS location,
    mc.name                 AS category,
    mc.display_order        AS category_order,
    fi.name                 AS item,
    fi.is_vegan,
    fi.is_vegetarian,
    fi.is_halal,
    fi.has_beef,
    fi.has_pork,
    fi.has_eggs,
    fi.has_milk,
    fi.has_fish,
    fi.has_shellfish,
    fi.has_tree_nuts,
    fi.has_peanuts,
    fi.has_soy,
    fi.has_wheat,
    fi.has_sesame,
    fi.calories,
    fi.protein,
    dm.date
FROM food_items fi
JOIN menu_categories mc ON fi.category_id  = mc.id
JOIN dining_menus    dm ON mc.menu_id       = dm.id
JOIN dining_locations dl ON dm.location_id  = dl.id
WHERE dm.date = CURRENT_DATE
ORDER BY dl.name, mc.display_order, fi.name;

-- 6. Permissions — allow anon key full access (matches your existing setup)
ALTER TABLE dining_locations  ENABLE ROW LEVEL SECURITY;
ALTER TABLE dining_menus      ENABLE ROW LEVEL SECURITY;
ALTER TABLE menu_categories   ENABLE ROW LEVEL SECURITY;
ALTER TABLE food_items        ENABLE ROW LEVEL SECURITY;

CREATE POLICY "public_all" ON dining_locations  FOR ALL USING (true) WITH CHECK (true);
CREATE POLICY "public_all" ON dining_menus      FOR ALL USING (true) WITH CHECK (true);
CREATE POLICY "public_all" ON menu_categories   FOR ALL USING (true) WITH CHECK (true);
CREATE POLICY "public_all" ON food_items        FOR ALL USING (true) WITH CHECK (true);
