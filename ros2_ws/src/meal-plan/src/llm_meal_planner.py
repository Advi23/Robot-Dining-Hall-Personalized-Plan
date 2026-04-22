import os
import requests
import json
import pyttsx3
import re

# Configuration
SUPABASE_URL = 'https://zvstwghosiivbvucjlzx.supabase.co'
SUPABASE_KEY = 'sb_publishable_CLuDIL1qA0Cl6sO9c0679A_nsL5bXIG'
TABLE_NAME = 'dining_preferences'

# Note: You can either set the OPENROUTER_API_KEY environment variable in your terminal
# (e.g., $env:OPENROUTER_API_KEY="sk-or-v1-...") or simply replace 'YOUR_OPENROUTER_API_KEY_HERE' below.
OPENROUTER_API_KEY = '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'

DINING_MENU_URL = "https://hf-foodpro.austin.utexas.edu/foodpro/shortmenu.aspx?sName=University+Housing+and+Dining&locationNum=03&locationName=Kins+Dining&naFlag=1"

PROMPT_TEMPLATE = """
Using the following text extracted from the dining menu for today, and the user's preferences, generate a concise meal plan separated by sections (Comfort Table, Texas Grill, etc).
Do NOT attempt to use any tools or fetch any URLs. Rely ONLY on the menu text provided below. Keep your response conversational as it will be read aloud by a robot.

User Preferences:
{user_preferences}

Today's Menu Text:
{menu_text}
"""

def fetch_latest_preference():
    print("Fetching latest preferences from Supabase...")
    # Fetch from Supabase using REST API
    url = f"{SUPABASE_URL}/rest/v1/{TABLE_NAME}?select=*&order=created_at.desc&limit=1"
    headers = {
        'apikey': SUPABASE_KEY,
        'Authorization': f'Bearer {SUPABASE_KEY}'
    }
    
    response = requests.get(url, headers=headers)
    
    if response.status_code == 200:
        data = response.json()
        if len(data) > 0:
            return data[0]
        else:
            print("No data found in Supabase table.")
            return None
    else:
        print(f"Error fetching from Supabase: {response.status_code} - {response.text}")
        return None

def generate_meal_plan(user_data):
    print("Fetching today's dining menu...")
    menu_text = "Could not fetch menu."
    try:
        menu_resp = requests.get(DINING_MENU_URL)
        if menu_resp.status_code == 200:
            # Strip HTML tags and scripts/styles to save tokens
            text = re.sub(r'<style.*?>.*?</style>', '', menu_resp.text, flags=re.IGNORECASE|re.DOTALL)
            text = re.sub(r'<script.*?>.*?</script>', '', text, flags=re.IGNORECASE|re.DOTALL)
            text = re.sub(r'<[^>]+>', ' ', text)
            text = re.sub(r'\s+', ' ', text).strip()
            # Limit text length to prevent context window overflow on free models
            menu_text = text[:12000]
    except Exception as e:
        print(f"Failed to fetch menu: {e}")

    print("Generating meal plan with OpenRouter...")

    # Format user data into a readable string
    preferences_str = json.dumps(user_data, indent=2)
    
    prompt = PROMPT_TEMPLATE.format(
        menu_text=menu_text,
        user_preferences=preferences_str
    )

    headers = {
        "Authorization": f"Bearer {OPENROUTER_API_KEY}",
        "HTTP-Referer": "http://localhost:3000", # Optional but recommended by OpenRouter
        "X-OpenRouter-Title": "Robot Dining Hall", # Optional but recommended by OpenRouter
        "Content-Type": "application/json"
    }
    
    payload = {
        # Using the OpenRouter automatic free model router to avoid 404 errors with specific models
        "model": "openrouter/free", 
        "messages": [
            {
                "role": "system",
                "content": "You are a helpful dining assistant robot. Keep your responses conversational and concise, as they will be read aloud."
            },
            {
                "role": "user",
                "content": prompt
            }
        ]
    }
    
    response = requests.post("https://openrouter.ai/api/v1/chat/completions", headers=headers, json=payload)
    
    if response.status_code == 200:
        result = response.json()
        return result['choices'][0]['message']['content']
    else:
        print(f"Error calling OpenRouter: {response.status_code} - {response.text}")
        return None

def speak(text):
    print("\n--- Robot Output ---")
    print(text)
    print("--------------------\n")
    print("Speaking...")
    
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()

def main():
    # 1. Get user preferences
    user_data = fetch_latest_preference()
    
    if not user_data:
        print("Could not retrieve user preferences. Exiting.")
        return
    
    print(f"Got preferences for user from Supabase! (Created at: {user_data.get('created_at', 'Unknown')})")
    
    # 2. Generate Meal Plan
    meal_plan_text = generate_meal_plan(user_data)
    
    if not meal_plan_text:
        print("Failed to generate meal plan. Exiting.")
        return
        
    # 3. Read it aloud
    speak(meal_plan_text)

if __name__ == "__main__":
    main()
