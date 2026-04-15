import whisper
import sounddevice as sd
import numpy as np
import pyttsx3

model = whisper.load_model("base")

engine = pyttsx3.init()

def speak(text):
    engine.say(text)
    engine.runAndWait()

def listen(duration=4):
    print("Listening...")

    audio = sd.rec(
        int(duration * 16000),
        samplerate=16000,
        channels=1,
        dtype="float32"
    )

    sd.wait()

    audio = np.squeeze(audio)

    result = model.transcribe(audio)

    text = result["text"]

    print("You said:", text)

    return text

speak("Say something.")

command = listen()

if "done" in command.lower():
    speak("Moving to next station.")

else:
    speak("I did not understand.")