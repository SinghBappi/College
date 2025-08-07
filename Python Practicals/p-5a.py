# Ask user how many items
my_dict = {}
n = int(input("How many items do you want to add to the dictionary? "))

# Get key-value pairs from user
for i in range(n):
    key = input(f"Enter key #{i+1}: ")
    value = int(input(f"Enter value for '{key}': "))
    my_dict[key] = value

# Sorting ascending
print("\nSorting in ascending order by value:")
for k, v in sorted(my_dict.items(), key=lambda x: x[1]):
    print(k, ":", v)

# Sorting descending
print("\nSorting in descending order by value:")
for k, v in sorted(my_dict.items(), key=lambda x: x[1], reverse=True):
    print(k, ":", v)
