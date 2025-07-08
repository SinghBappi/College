def sumofnums (a):
    if a<=1:
        return 1
    else:
        return a + sumofnums(a-1)
print(sumofnums(3))