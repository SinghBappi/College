# Ask the user to enter a number
number = input("Please enter a number: ")

# Convert the input to an integer
number = int(number)

# Check if the number is even or odd
if number % 2 == 0:
    print("The number you entered is even.")
else:
    print("The number you entered is odd.")
