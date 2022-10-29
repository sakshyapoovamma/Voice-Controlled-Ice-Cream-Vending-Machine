from email.mime import audio
import speech_recognition as sr

def main():
    r=sr.Recognizer()
    with sr.Microphone() as source:
        r.adjust_for_ambient_noise(source)
        print("Please say what you want...")
        audio= r.listen(source)
        input=r.recognize_google(audio)
        try:
            print("You have said:\n"+ input)
        except Exception as e:
            print("Error : "+ str(e))
    file=open(r'C:\\Users\saksh\\OneDrive\\Documents\\fyy.txt','w')
    file.write(input)
    file.close()
if __name__ == "__main__":
    main()