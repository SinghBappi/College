from tkinter import *
import tkinter

top = tkinter.Tk()
top.title("Bit map style buttons")
B1= tkinter.Button(top,text="relief style:FLAT",relief=FLAT)
B2= tkinter.Button(top,text="relief style:Raised",relief=RAISED)
B3= tkinter.Button(top,text="relief style:Sunken",relief=SUNKEN)
B4= tkinter.Button(top,text="relief style:Groovw",relief=GROOVE)
B5= tkinter.Button(top,text="relief style:Ridge",relief=RIDGE)
#B6= tkinter.Button(top,text="relief style:Spider",relief=SPIDER)


#B2= tkinter.Button(top,text="hourglass",relief=RAISED,bitmap="hourglass")
#B3= tkinter.Button(top,text="info",relief=RAISED,bitmap="info")
#B4= tkinter.Button(top,text="question",relief=RAISED,bitmap="question")
#B5= tkinter.Button(top,text="warning",relief=RAISED,bitmap="warning")
B1.pack()
B2.pack()
B3.pack()
B4.pack()
B5.pack()
#B6.pack()







top.mainloop()
