from email.mime import audio
from http import server
from msilib.schema import ServiceControl
import ntpath
from unicodedata import name
from unittest import result
import webbrowser
from xmlrpc.client import Server
from numpy import take
from pip import main
import pyttsx3
import speech_recognition as sr
import datetime
import os
import random
from requests import get
import wikipedia
import pywhatkit as kit
import smtplib
import sys



engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')

engine.setProperty('voices' , voices[0] .id )

# print(voices [1] .id)
#  text to speak
def speak(audio):
    engine.say(audio)
    print(audio)
    engine.runAndWait()


# to convert voice itno text
def takecommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listening...")
        r.pause_threshold = 1
        audio = r.listen(source,timeout=1,phrase_time_limit=5)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"user said: {query}")

    except Exception as e:
        speak('Sorry, I could not understand. Could you please say that again?')
        return "none"
    return query

#  to allow jarvis to say good after noon good morinign or evening
def wish():
    hour = datetime.datetime.now().hour

    if hour>=0 and hour<=12:
        speak("Good morning")

    elif hour>12 and hour<18:
        speak("Good Afternoon")
    
    else:
        speak("Good Evening")
    speak("Hello! i am your Virtual Assitant, Thanks for turning me on! i am Online and ready sir So! What can i do for you now")

def sendEmail(to,content):
    server = smtplib.SMTP('smtp.gmail.com',587)
    server.ehlo()
    server.starttls
    server.login('your email id','your password')
    server.sendemail('your email id', to,content)
    Server.close()
        


if _name_ == "_main_":
    # takecommand()
    wish()
    # speak("hello! How are you?")

    while True:

        query = takecommand().lower()


    
        


        if "open sublime" in query:
            npath = "C:\Program Files (x86)\Sublime Text 3\sublime_text.exe"
            os.startfile(npath)

        

        # if "open vscode" in query:
        #     npath = "C:\Users\AFNAN\AppData\Local\Programs\Microsoft VS Code\Code.exe"
        #     os.startfile(npath)

        elif "open pubg" in query:
            npath = "H:\Program Files\TxGameAssistant\AppMarket\AppMarket.exe"
            os.startfile(npath)

        # if "open opera" in query:
        #     npath = "C:\Users\AFNAN\AppData\Local\Programs\Opera\launcher.exe"
        #     os.startfile(ntpath)

        elif "open adobe illustrator" in query:
            npath = "E:\\ADOBE ILLUSTORATOR\ADOBE ILUUSTAROR\Adobe Illustrator 2022\Support Files\Contents\Windows\Illustrator.exe"
            os.startfile(npath)

        elif "open adobe photoshop" in query:
            npath = "E:\\ADOBE PHOTOSHOP\ADOBE PHOTOSHOP 22\Adobe Photoshop 2022\Photoshop.exe"
            os.startfile(npath)

        elif " open cmd" in query:
            os.system("start cmd")

        elif "play music" in query:
            music_dir = "H:\\muscis"
            songs = os.listdir(music_dir)
            rd= random.choice(songs)
            os.startfile(os.path.join(music_dir, rd))

        elif "what is my ip address" in query:
            ip = get('https://api.ipify.org').text
            speak(f"your ip address is {ip}")

        elif "wikipedia" in query:
            speak("searching wikipedia...")
            query = query.replace("wikipedia","")
            results = wikipedia.summary(query, sentences=3)
            speak("according to wikipedia")
            speak(results)
            # print(results)

        elif "open youtube" in query:
            webbrowser.open("www.youtube.com")

        elif "open my channel" in query:
            webbrowser.open("https://www.youtube.com/channel/UCCrd0GQsEconE8oj49C7Ggw")

        elif "open facebook" in query:
            webbrowser.open("www.facebook.com")

        elif "open google" in query:
            speak("sir, what should i search on google")
            cm= takecommand().lower()
            webbrowser.open(f"{cm}")

        # elif "send message to" in query:
        #     speak("sir, what is the messege you want to send")
        #     sms=takecommand().lower()
        #     sec = datetime.datetime.now()
        #     kit.sendwhatmsg("+923445543477","{sms}",7,30)

        elif "play songs on youtube" in query:
            webbrowser.open("https://www.youtube.com/watch?v=313q_4mYVRg")

        elif "search on youtube" in query:
            speak("sir, what should i search for you on youtube")
            yt= takecommand().lower()
            kit.playonyt(f"{yt}")

        elif "send email to afnan" in query:
            try:
                speak('what should i say?')
                content = takecommand().lower()
                to = "afnanahmed43477@gmail.com"
                sendEmail(to,content)
                speak("Email has send to Afnan")

            except Exception as e:
                print(e)
                speak("sorry sir! i am not capable to send email to Afnan at the moment")

        elif "you can go to sleep now" in query:
            speak("thanks for using me sir, i enjoyed to work for you, i will wait for the next time we will meet") 
            sys.exit()