def is_pangram(sentence):
    alphabet = set('abcdefghijklmnopqrstuvwxyz')
    return alphabet.issubset(set(sentence.lower()))

# User input
user_sentence = input("Enter a sentence to check if it's a pangram:\n")
if is_pangram(user_sentence):
    print("It is a pangram")
else:
    print("It is not a pangram")
