num = int(input("Enter the num for fibo:"))
x1=0
x2=1
count=2
if num<=0:
    print("I caught you boy !")
elif num==1:
    print(x1)
else:
    print("Fibonacci series:")
    print(x1," , ",x2)
    while count<num:
        xth = x1+x2
        print(xth)
        x1=x2
        x2=xth
        count+=1
    
