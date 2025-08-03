# str1 = "Hello"
# str2 = " World!"
# str3 = str1+str2
# print(str3) String concatenation

# string repetition
# str1 = "spam"*2
# print(str1)

#get particular character
# str1 = "hello test"
# print(str1[2])

# # Slicing
# test = "Test String"
# print(test[0:5])
# print(test[:3])
# print(test[2:])
# print(test[-1])
# print(test[-1:-11:-1])

#String Methods
str1 = "Ba\tppi"
str2 = "\t"
# print(str1.islower())
# print(str1.lower())
# print(str1.isupper())
# print(str1.upper())
# print(str1.upper().isupper())
# print(str1.isalpha())
# print(str1.isdigit())
# print(str2.isspace())
# print(str1.find("1"))
# print(str1.replace("pp","qq"))
# print(str1.count("p"))
# print(len(str1))


# var = "banana"
# i=0
# # print(var[4:0])
# while i<len(var):
#     print(var[i])
#     i=i+1

#fibonacci series !
# def fibo():
#     n = int(input("Enter a number:"))
#     a=0
#     b=1
#     while(a<n):
#         print(a)
#         temp = a
#         a=b
#         b=temp+b
# fibo()

# Stars Started !


# for i in range(5,0,-1):
#     for j in range(i):
#         print("*",end="")
#     print()
#     '''
#     PS D:\COLLEGE REPO\College\Practices> python -u "d:\COLLEGE REPO\College\Practices\string_1.py"
# *****
# ****
# ***
# **
# *
# PS D:\COLLEGE REPO\College\Practices> 
#     '''
    


# for i in range(1,5,1):
#     for j in range(5-i):
#         print("*")
# print(" ")
        
        

# for i in range(1,5+1):
#     print("*"*i)
#     '''
    
#     PS D:\COLLEGE REPO\College\Practices> python -u "d:\COLLEGE REPO\College\Practices\string_1.py"
# *
# **
# ***
# ****
# *****
# PS D:\COLLEGE REPO\College\Practices> 

#     '''



# for i in range(1,6):
#     for j in range(1,i+1):
#         print(j,end="")
#     print()
# '''
# PS D:\COLLEGE REPO\College\Practices> python -u "d:\COLLEGE REPO\College\Practices\string_1.py"
# 1
# 12
# 123
# 1234
# 12345
# PS D:\COLLEGE REPO\College\Practices> '''


# for i  in range(1,5,1):
#     for j in range(1,i+1):
#         print(j,end="")
#     print()

# for i  in range(3,0,-1):
#     for j in range(1,i+1):
#         print(j,end="")
#     print()

#     '''
#     PS D:\COLLEGE REPO\College\Practices> python -u "d:\COLLEGE REPO\College\Practices\string_1.py"
# 1
# 12
# 123
# 1234
# 123
# 12
# 1
#     '''


# n = int(input("Enter the number:"))
# sum =0
# copynum = n
# order = len(str(n))
# while n>0:
#     digit = n%10
#     sum = sum + digit ** order
#     n=n//10
# if sum==copynum:
#     print("it's a armstrong number")
# else:
#     print("it's not a armstrong number")

# Palindrome Number
n = 252
rev = 0
copy = n
while n>0:
    rev = (rev*10)+(n%10)
    n=n//10

if copy == rev:
    print("Palindrome Number!")
    

def pali(num):
    return str(num)==str(num)[::-1]
print(pali(121))


