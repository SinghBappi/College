n1 = int(input("Enter n:"))
if n1%5==0 or n1%10==0:
    print("it is divisible by 5 or 10")
elif n1%5==0 and n1%10==0:
    print("it is divisble by both of them")
elif n1%5!=0 and n1%10!=0 :
    print("It is not divide by 5 or 10 both")

