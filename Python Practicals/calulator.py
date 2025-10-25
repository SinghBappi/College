n1 = int(input("Enter n1"))
n2 = int(input("Enter n2"))
op = input("Enter operation(+,-,*,/)")

if op == '*':
    print(n1*n2)
elif op == '+':
    print(n1+n2)
elif op == '-':
    print(n1-n2)
elif op == '/':
    print(n1/n2)
else:
    print("invlid operation")
