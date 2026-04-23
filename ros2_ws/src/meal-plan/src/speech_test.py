import whisper
import sounddevice as sd
import numpy as np
import pyttsx3

# Load the Whisper speech-to-text model
# "base" is a good balance between speed and accuracy
# Other options: "tiny", "small", "medium", "large" (larger = more accurate but slower)
model = whisper.load_model("base")


def speak(text):
    engine = pyttsx3.init()  # Initialize the text-to-speech engine
    engine.say(text)
    engine.runAndWait()
    # engine.stop()  # Releases the audio driver cleanly to avoid conflicts with sounddevice

def listen(duration=4, stop_phrases=["finished", "done", "next"]):
    # duration: how many seconds to record per chunk before transcribing
    # stop_phrases: words that signal the user is done speaking and we should stop listening

    print("Listening...")

    all_text = []  # Accumulates everything said across all recording chunks

    while True:
        # Record a chunk of audio from the microphone
        audio = sd.rec(
            int(duration * 16000),  # Total number of samples (duration × 16,000 samples/sec = 4 x 16,000 = 64,000 samples)
            samplerate=16000,        # Capture 16,000 audio samples per second (16kHz — standard for speech)
            channels=1,              # Mono audio (1 channel, not stereo)
            dtype="float32" ,         # Store each sample as a 32-bit float
            # Starts recording audio from the microphone using the sounddevice
            # library (sd). Returns a NumPy array that fills asynchronously in the background.
        )

        sd.wait()
        # Blocks execution until the recording is fully complete —
        # nothing runs after this line until all audio is captured.

        audio = np.squeeze(audio)
        # Removes the extra dimension from the recorded array. The raw recording has
        # shape (64000, 1) (samples × channels); squeeze flattens it to (64000,), which is
        # what Whisper expects.


        result = model.transcribe(audio)
        # Passes the audio array to a Whisper model, which returns a dictionary containing the
        # transcription and metadata.

        text = result["text"].lower().strip()
        # .lower() normalizes to lowercase so "Done" and "done" both match stop phrases
        # .strip() removes any leading/trailing whitespace or newlines

        print("You said:", text)

        all_text.append(text)
        # Save this chunk's transcript so we don't lose it if the loop continues

        # Check if any stop phrase was spoken in this chunk
        if any(phrase in text for phrase in stop_phrases):
            print("Stop phrase detected!")
            speak("Okay, I'll take it from here.")
            break
        # If no stop phrase was found, the loop continues and records another chunk

    return " ".join(all_text)
    # Join all recorded chunks into one string and return it to the caller


# --- Main program flow ---

speak("Say something.")
# Prompt the user to start speaking

command = listen()
# Start listening in a loop until a stop phrase is detected
# command will contain everything the user said across all chunks

# React to what the user said
if "done" in command or "finished" in command:
    speak("Moving to next station.")
elif "next" in command:
    speak("Going to the next item.")
else:
    speak("I did not understand.")