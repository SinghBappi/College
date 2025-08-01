import tkinter
# from tkinter import *
from tkinter import messagebox
import openpyxl

def Oclick_submit():
    name = name_text_box.get()
    email = email_text_box.get()
    phone = phone_text_box.get()
    # messagebox.showinfo("Capture Data",name)
    
    if name and email  and phone:
        messagebox.showinfo("Status","Data Submitted!")
    else:
        messagebox.showwarning("Warning","Please Fill all the data!")
    


root = tkinter.Tk()
# root = Tk()

root.geometry("400x400")
root.configure(bg="tomato")

root.title("Student Registration form!")
name_label = tkinter.Label(root,text="Name:")
name_label.pack(anchor=tkinter.W,padx=20)

name_text_box = tkinter.Entry(root)
name_text_box.pack(anchor=tkinter.W,padx=20)

email_label = tkinter.Label(root,text="Email:")
email_label.pack(anchor=tkinter.W,padx=20)
email_text_box = tkinter.Entry(root)
email_text_box.pack(anchor=tkinter.W,padx=20)


phone_label = tkinter.Label(root,text="Phone Number:")
phone_label.pack(anchor=tkinter.W,padx=20)
phone_text_box = tkinter.Entry(root)
phone_text_box.pack(anchor=tkinter.W,padx=20)

submit_btn = tkinter.Button(root,text="Submit",command=Oclick_submit)
submit_btn.pack(anchor=tkinter.W,padx=20)

root.mainloop()