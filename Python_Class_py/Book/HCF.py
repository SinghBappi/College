def hcf(a,b):
    if a>b:
        small=b
    else:
        small = a;
    for i in range(1,small+1):
        if((a%i==0)and (b%i==0)):
            hcf = i
    return hcf
inoput1= int(input("Enter the Input for HCF:"))
inoput2= int(input("Enter the Input for HCF:"))


print(hcf(inoput1,inoput2))