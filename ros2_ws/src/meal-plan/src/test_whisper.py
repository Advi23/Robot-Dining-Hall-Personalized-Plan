import whisper
import sounddevice as sd
import numpy as np

# Load Whisper model
model = whisper.load_model("base")

def record_audio(duration=5):
    print("Listening...")

    audio = sd.rec(
        int(duration * 16000), #duration: 16 seconds
        samplerate=16000,
        channels=1,
        dtype="float32"
    )

    sd.wait()

    return np.squeeze(audio)

def transcribe():
    audio = record_audio()

    print("Processing...")

    result = model.transcribe(audio)

    print("You said:")
    print(result["text"])

transcribe()