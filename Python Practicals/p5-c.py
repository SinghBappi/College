# Create a dictionary from user input
my_dict = {}
n = int(input("How many items in the dictionary? "))

for i in range(n):
    key = input(f"Enter key #{i+1}: ")
    value = int(input(f"Enter value for '{key}': "))
    my_dict[key] = value

# Sum all the values
total = sum(my_dict.values())
print("Sum of all items in the dictionary:", total)
