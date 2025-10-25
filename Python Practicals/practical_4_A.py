def hascommonmember(list1, list2):
    for item in list1:
        if item in list2:
            return True
    return False

# Input size of lists
n1 = int(input("Enter the number of elements in list1: "))
n2 = int(input("Enter the number of elements in list2: "))

# Create list1 using a for loop
list1 = []
print("Enter elements for list1:")
for i in range(n1):
    element = int(input(f"Element {i+1}: "))
    list1.append(element)

# Create list2 using a for loop
list2 = []
print("Enter elements for list2:")
for i in range(n2):
    element = int(input(f"Element {i+1}: "))
    list2.append(element)

# Check for common members
print("Has common member:", hascommonmember(list1, list2))
