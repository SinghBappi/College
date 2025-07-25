def histogram(number):
    # Convert number to string to get each digit
    for digit in str(number):
        # Change digit back to number and print that many stars
        count = int(digit)
        print('*' * count)

# Example: Show histogram for 497
print("Enter number for Histogram(example:497):")
num=int(input())
histogram(num)
