x=int(input("X:"))

y=int(input("Y:"))

z = int(input("Z:"))

if (x>y) and (x>z):
    l = x
elif (y>x) and (y>z):
    l= y
else:
    l = z
print("The greatest Number is ",l)
