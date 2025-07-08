low = int(input("Enter low:"))
high = int(input("Enter high:"))
for n in range(low,high+1):
    if n>1:
        for i in range(2,n):
            if (n%i)==0:
                break
        else:
            print(n)
                
