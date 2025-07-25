def is_armstrong(number):
    num_str = str(number)
    power = len(num_str)
    total = 0
    for digit in num_str:
        total += int(digit) ** power
    return total == number

def is_palindrome(value):
    value = str(value)
    return value == value[::-1]

# Ask user for input
num = input("Enter a number to check Armstrong and Palindrome: ")

# Convert to integer for Armstrong check
num_int = int(num)

# Armstrong check
if is_armstrong(num_int):
    print(" It is an Armstrong number.")
else:
    print("It is not an Armstrong number.")

# Palindrome check
if is_palindrome(num):
    print(" It is a Palindrome.")
else:
    print(" It is not a Palindrome.")
