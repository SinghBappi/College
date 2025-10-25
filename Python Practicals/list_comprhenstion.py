a=range(11)
b=range(11)
c=range(11)
a=[x**2 for x in range(11)]
b=[x**3 for x in range(11)]
c=[x for x in a if x%2==0]
print(a)
print(b)
print(c)
