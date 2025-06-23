# for i in range(1,21,1):
#     if(i%2==0):
#         continue
#     elif(i%3==0):
#         continue
#     elif(i%5==0):
#         continue
#     else:
#         sum = i+i
        
#     print(sum)
'''

Write a program to calculate sum of numbers from one to 20 which are not divisible by 2, 3,5
'''

total = 0
for i in range(1,21):
    if i%2==0 or i%3==0 or i%5==0:
        continue
    else: 
        total = total + i
    print(total)