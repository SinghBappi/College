year = int(input("Enter the Year:"))
if year%4==0:
    if year%100==0:
        if year%400==0:
            print("It's a Leap Year !")
        else:
            print("It's a Leap Year !")
    else:
        print("It's a Leap Year !")
else:
    print("It's Not a Leap Year !")

    
