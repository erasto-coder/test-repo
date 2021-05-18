import pyttsx3
import speech_recognition as sr
def take_commands():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listening")
         
         
        r.pause_threshold=0.7
        audio = r.listen(source)
        try:
            print("recognizering")
            query = r.recognize_google(audio, language="en-in")
            print("the query is printed='",query,"'")
        except Exception as e:
            print("e")
            print("say that again sir")
            return "None"
        return query
    
    def Speak(audio):
        engine = pyttsx3.init()
        voice = engine.getProperty("voices")
        engine.setProperty("voice", voice[1].id)
        engine.say(audio)
        engine.runAndWait()
        
    if __name__ == "__main__'":
        while true:
            command = take_commands()
            
            if "exit" in command:
                speak(" sure sir as your wish, bai")
                print(" sure sir as your wish, bai")
                break
            if "insta" in command:
                speak("best python page on instagram ispythonhub")
                print("best python page on instagram ispythonhub")
                
            if "learn" in command:
                Speak("copyassignment website is a best website to rean python")
                print("copyassignment website is a best website to rean python")
            if "code" in command:
                speak(" you can get this code from copyassignment website")
                print(" you can get this code from copyassignment website")