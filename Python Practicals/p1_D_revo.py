# Get user input
value = input("Enter something to reverse: ")

# Create an empty string to hold the reversed version
reversed_value = ""

# Use a for loop to go through the string backward
for char in value:
    reversed_value = char + reversed_value

# Show the result
print("Reversed:", reversed_value)
