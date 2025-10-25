import tkinter as tk
from tkinter import scrolledtext
import mysql.connector
import google.generativeai as genai
import speech_recognition as sr

# ========== CONFIG ==========
API_KEY = "AIzaSyAwZlVW1ajKktJge1FxA3E0QksjCtOrEOE"   # Replace with your Gemini API key
genai.configure(api_key=API_KEY)

# Connect MySQL
db = mysql.connector.connect(
    host="localhost",
    user="root",        # WampServer default username
    password="",        # WampServer default password is empty
    database="chatbot_db"
)
cursor = db.cursor()

# Speech recognizer
recognizer = sr.Recognizer()
is_listening = False  # flag for listening state

# ========== FUNCTIONS ==========
def save_to_db(user_text, bot_text):
    sql = "INSERT INTO history (user_input, bot_response) VALUES (%s, %s)"
    cursor.execute(sql, (user_text, bot_text))
    db.commit()

def get_response(user_text):
    model = genai.GenerativeModel("gemini-1.5-flash")
    response = model.generate_content(user_text)
    return response.text

# Helper function to insert text in read-only chat box
def add_to_chat(text):
    chat_window.config(state=tk.NORMAL)
    chat_window.insert(tk.END, text)
    chat_window.config(state=tk.DISABLED)
    chat_window.see(tk.END)  # auto-scroll

def send_message():
    user_text = entry.get("1.0", tk.END).strip()
    if user_text == "":
        return
    
    add_to_chat("You: " + user_text + "\n")
    entry.delete("1.0", tk.END)

    try:
        bot_text = get_response(user_text)
    except Exception as e:
        bot_text = "Error: " + str(e)

    add_to_chat("Bot: " + bot_text + "\n\n")

    save_to_db(user_text, bot_text)

def start_listening():
    global is_listening
    is_listening = True
    add_to_chat("🎤 Listening... Speak now!\n")

    with sr.Microphone() as source:
        while is_listening:
            try:
                audio = recognizer.listen(source, timeout=5, phrase_time_limit=5)
                user_text = recognizer.recognize_google(audio)
                entry.delete("1.0", tk.END)
                entry.insert(tk.END, user_text)
                add_to_chat(f"You said: {user_text}\n")
                break
            except sr.WaitTimeoutError:
                add_to_chat("Listening timed out...\n")
                break
            except sr.UnknownValueError:
                add_to_chat("Could not understand audio.\n")
                break
            except sr.RequestError:
                add_to_chat("Speech service error.\n")
                break

def stop_listening():
    global is_listening
    is_listening = False
    add_to_chat("⏹ Listening stopped.\n")

def load_history():
    cursor.execute("SELECT user_input, bot_response FROM history ORDER BY id DESC LIMIT 10")
    rows = cursor.fetchall()
    add_to_chat("----- Chat History -----\n")
    for row in rows[::-1]:
        add_to_chat("You: " + row[0] + "\n")
        add_to_chat("Bot: " + row[1] + "\n\n")
    add_to_chat("-------------------------\n")

# ========== GUI ==========
root = tk.Tk()
root.title("AI Chatbot with Tkinter + Gemini + MySQL")

# Chat Window (read-only)
chat_window = scrolledtext.ScrolledText(root, wrap=tk.WORD, width=60, height=20, state=tk.DISABLED)
chat_window.pack(padx=10, pady=10)

# Entry + Send button in same row
frame = tk.Frame(root)
frame.pack(padx=10, pady=5, fill="x")

entry = tk.Text(frame, height=3, width=45)
entry.pack(side="left", padx=5)

send_button = tk.Button(frame, text="Send", command=send_message)
send_button.pack(side="right", padx=5)

# Voice control buttons
voice_frame = tk.Frame(root)
voice_frame.pack(pady=5)

start_button = tk.Button(voice_frame, text="🎤 Start Listening", command=start_listening)
start_button.pack(side="left", padx=5)

stop_button = tk.Button(voice_frame, text="⏹ Stop Listening", command=stop_listening)
stop_button.pack(side="left", padx=5)

# History button on left side
bottom_frame = tk.Frame(root)
bottom_frame.pack(pady=5, fill="x")

history_button = tk.Button(bottom_frame, text="📜 Load History", command=load_history)
history_button.pack(side="left", padx=5)

root.mainloop()
