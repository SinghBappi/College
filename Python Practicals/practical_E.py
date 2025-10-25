def is_armstrong(num):
    digits = list(str(num))      
    power = len(digits)          
    
    total = 0
    for d in digits:
        total += int(d) ** power 
    
    if total == num:
        return True
    else:
        return False

number = int(input("Enter a number: "))

if is_armstrong(number):
    print(number, "is an Armstrong number")
else:
    print(number, "is not an Armstrong number")
