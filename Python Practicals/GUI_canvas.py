from tkinter import *
root = Tk()
canvas_width = 800
canvas_height = 800
w = Canvas(root,width=canvas_width,height=canvas_height)
w.pack()
y = int(canvas_height/2)
w.create_line(0,y,canvas_width,y,fill="orange")
coord = 10,50,240,210
arc = w.create_arc(coord,start=0,extent=90,fill="Black")
oval = w.create_oval(50,60,100,100,fill="green")
mainloop()
