n1 = int(input("Enter n1"))
n2 = int(input("Enter n2"))
n3 = int(input("Enter n3"))
n4 = int(input("Enter n4"))
n5 = int(input("Enter n5"))

per = ((n1+n2+n3+n4+n5)/500)*100

if per >=90:
    print("Distinction")
elif per>=80 and per<90:
    print("first class")
elif per>=70 and per<80:
    print("Second class")
elif per>=60 and per<70:
    print("Thrid class")
elif per<60:
    print("Fail")
