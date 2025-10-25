def removespecificindices(lst):
    indices_to_remove = [0, 2, 4, 5]
    result = [item for idx, item in enumerate(lst) if idx not in indices_to_remove]
    return result

# Take user input for the list
n = int(input("Enter the number of elements in the list: "))
my_list = []
for i in range(n):
    item = input(f"Enter element {i}: ")
    my_list.append(item)

# Remove specific indices
new_list = removespecificindices(my_list)
print("Modified list:", new_list)
