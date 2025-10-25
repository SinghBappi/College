import tkinter as tk
from tkinter import messagebox

def submit_form():
    username = entry_username.get()
    password = entry_password.get()
    gender = gender_var.get()
    age = entry_age.get()
    agree = agree_var.get()

    if not agree:
        messagebox.showwarning("Warning", "You must agree to the terms.")
        return

    message = "Login Successful!\n" + \
              "Username: " + username + "\n" + \
              "Gender: " + gender + "\n" + \
              "Age: " + age

    messagebox.showinfo("Form Submitted", message)

# GUI window
root = tk.Tk()
root.title("Gym Login Form")
root.geometry("300x350")

# Username (Text)
tk.Label(root, text="Username").pack()
entry_username = tk.Entry(root)
entry_username.pack()

# Password (Password)
tk.Label(root, text="Password").pack()
entry_password = tk.Entry(root, show="*")
entry_password.pack()

# Gender (Radio)
tk.Label(root, text="Gender").pack()
gender_var = tk.StringVar()
tk.Radiobutton(root, text="Male", variable=gender_var, value="Male").pack()
tk.Radiobutton(root, text="Female", variable=gender_var, value="Female").pack()

# Age (Number input)
tk.Label(root, text="Age").pack()
entry_age = tk.Entry(root)
entry_age.pack()

# Terms & Conditions (Checkbox)
agree_var = tk.BooleanVar()
tk.Checkbutton(root, text="I agree to terms", variable=agree_var).pack()

# Submit Button
tk.Button(root, text="Submit", command=submit_form).pack()

root.mainloop()
