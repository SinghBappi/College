import tkinter
from tkinter import messagebox

p = tkinter.Tk()

def buttoncallback():
                messagebox.askquestion("Question Window","May i come in ?")
                messagebox.showinfo("Information Window","Squid game S3 has been released!")
                messagebox.showwarning("Warning  Window","U R selected  for Squid Game 💀!")
                messagebox.showerror("Error Window ☠","They are coming for You!")



                
b1 = tkinter.Button(p,text="Click me for Surpise!",command=buttoncallback)

b1.pack()
p.mainloop
