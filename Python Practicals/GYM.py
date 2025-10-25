import tkinter as tk

def submit():
    name = name_entry.get()
    age = age_entry.get()
    gender = gender_var.get()
    print("Name:", name)
    print("Age:", age)
    print("Gender:", gender)
    print("-----")

# Main window
root = tk.Tk()
root.title("Gym Form")
root.geometry("250x250")

# Name
tk.Label(root, text="Name:").pack()
name_entry = tk.Entry(root)
name_entry.pack()

# Age
tk.Label(root, text="Age:").pack()
age_entry = tk.Entry(root)
age_entry.pack()

# Gender
tk.Label(root, text="Gender:").pack()
gender_var = tk.StringVar(value="Male")
tk.Radiobutton(root, text="Male", variable=gender_var, value="Male").pack()
tk.Radiobutton(root, text="Female", variable=gender_var, value="Female").pack()
tk.Radiobutton(root, text="Other", variable=gender_var, value="Other").pack()

# Submit button
tk.Button(root, text="Submit", command=submit).pack()

root.mainloop()
