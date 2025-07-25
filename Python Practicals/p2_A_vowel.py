# # Ask the user to enter a vowel character
# char = input("Enter a vowel: ")

# if char == 'A' or char == 'a':
#     print("It's Vowel")
# elif char == 'E' or char == 'e':
#     print("It's Vowel")
# elif char == 'I' or char == 'i':
#     print("It's Vowel")
# elif char == 'O' or char == 'o':
#     print("It's Vowel")
# elif char == 'U' or char == 'u':
#     print("It's Vowel")
# else:
#     print("It's not a vowel!")

# Ask the user to enter a vowel character
char = input("Enter a vowel: ")

# Convert input to lowercase and check if it's a vowel
if char.lower() in "aeiou":
    print("It's Vowel")
else:
    print("It's not a vowel!")