# Ask for numbers and split them into a list of text words
text_words = input("Enter numbers separated by spaces: ").split()

# Create a new, empty list to store our results
numbers_less_than_five = []

# Look at each word from the user's input
for word in text_words:
  # Convert the word to a real number
  number = int(word)

  # Check if the number is less than 5
  if number < 5:
    # If it is, add it to our new list
    numbers_less_than_five.append(number)

# After checking all the numbers, print the final list
print("Here is the list of numbers less than 5:")
print(numbers_less_than_five)
