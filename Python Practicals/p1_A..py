# Ask for the user's name
name = input("What is your name? ")

# Ask for the user's age
age = input("How old are you? ")

# Convert age from string to number
age = int(age)

# Set the current year manually
current_year = 2025

# Calculate the year when the user will turn 100
year_100 = current_year + (100 - age)

# Print a personalized message
print("Hello " , name , "! You will turn 100 years old in the year " , year_100 ,".")