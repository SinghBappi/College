# Function to create a dictionary from user input
def get_dict(number):
    d = {}
    n = int(input(f"\nHow many items in dictionary {number}? "))
    for i in range(n):
        key = int(input(f"Enter key #{i+1}: "))
        value = int(input(f"Enter value for key {key}: "))
        d[key] = value
    return d

# Get dictionaries from user
dic1 = get_dict(1)
dic2 = get_dict(2)
dic3 = get_dict(3)

# Combine all dictionaries
combined_dict = {}
combined_dict.update(dic1)
combined_dict.update(dic2)
combined_dict.update(dic3)

print("\nCombined Dictionary:", combined_dict)
