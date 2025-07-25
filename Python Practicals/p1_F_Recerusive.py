def facto(n):
    # Base case: facto of 0 or 1 is 1
    if n == 0 or n == 1:
        return 1
    # Recursive case: n * facto of n-1
    else:
        return n * facto(n - 1)

# Ask user for input
num = int(input("Enter a number: "))

# Calculate and print the facto
print("Factorial of", num, "is", facto(num))
