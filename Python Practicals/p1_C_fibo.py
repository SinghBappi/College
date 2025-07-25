# Ask how many Fibonacci numbers to generate
n = int(input("How many terms of the Fibonacci series do you want? "))

# First two terms of Fibonacci series
a = 0
b = 1

# Print the series
print("Fibonacci series:")

for i in range(n):
    print(a)
    c = a + b
    a = b
    b = c
