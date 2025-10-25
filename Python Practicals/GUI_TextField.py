import tkinter as tk
win = tk.Tk()
win.title("Welcome to the GUI world!")
l=tk.Label(win,text="Username:")
l1=tk.Label(win,text="Password:")
e=tk.Entry(win)
e1=tk.Entry(win)
l.grid(row=0,column=0)
e.grid(row=0,column=1)
l1.grid(row=1,column=0)
e1.grid(row=1,column=1)







win.mainloop()
