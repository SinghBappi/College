# Get input from user
original_list = input("Enter a list to copy (separate with commas): ").split(",")

# Clone the list
copied_list = original_list.copy()

print("Original list:", original_list)
print("Copied list:  ", copied_list)
