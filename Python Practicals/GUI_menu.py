from tkinter import Tk, Menu

root = Tk()
menu_bar = Menu(root)
root.config(menu=menu_bar)

file_menu = Menu(menu_bar, tearoff=0)
menu_bar.add_cascade(label="File", menu=file_menu)

file_menu.add_command(label="Quit!", command=root.destroy)
file_menu.add_separator()
file_menu.add_command(label="Exit!", command=root.destroy)  # Fixed typo here
file_menu.add_separator()
file_menu.add_command(label="End", command=root.destroy)

root.mainloop()
