# Get input from user
list1 = input("Enter the first list (separate items with commas): ").split(",")
list2 = input("Enter the second list (separate items with commas): ").split(",")

# Check for common elements
common = False
for item in list1:
    if item in list2:
        common = True
        break

print("Do they have at least one common member?", common)
