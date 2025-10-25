def clonel(original_list):
    return original_list[:]  

# Get user input for the list
n = int(input("Enter the number of elements in the list: "))
my_list = []
for i in range(n):
    element = input(f"Enter element {i}: ")
    # You can convert to int if you want numbers:
    # element = int(input(f"Enter element {i}: "))
    my_list.append(element)

copied_list = clonel(my_list)

print("Original List:", my_list)
print("Cloned List:", copied_list)
