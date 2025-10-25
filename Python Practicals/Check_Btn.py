from tkinter import *
import tkinter

win = tkinter.Tk()
var1 = IntVar()
var2 = IntVar()
c1 = Checkbutton(win,text="python",variable=var1,onvalue = 1,offvalue=0,height =2,width=10)
c2 = Checkbutton(win,text="Computer Network",variable=var2,onvalue = 1,offvalue=0,height =4,width=15)
c1.pack()
c2.pack()
win.mainloop()
