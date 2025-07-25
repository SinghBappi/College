# Get user input
val = input("Enter something to reverse: ")

# Create an empty string to hold the reversed version
revo = ""

# Use a for loop to go through the string backward
for char in val:
    revo = char + revo

# Show the result
print("Reversed:", revo)
