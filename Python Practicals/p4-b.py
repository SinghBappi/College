# Get input from user
my_list = input("Enter a list of items (separate with commas): ").split(",")

# Create a new list without elements at index 0, 2, 4, and 5
indexes_to_remove = [0, 2, 4, 5]
new_list = [item for i, item in enumerate(my_list) if i not in indexes_to_remove]

print("List after removing 0th, 2nd, 4th and 5th elements:", new_list)
