def reverse_input(data):
    result = ""
    for char in data:
        result = char + result  
    return result

a = input("Enter a user input:")
print(reverse_input(a))
