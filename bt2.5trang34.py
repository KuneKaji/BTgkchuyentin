def xuli(n):
    if (n<10):
        return n
    while (n//10>0):
        x=n
        tong=0
        while (x>0):
            tong=tong+(x%10)
            x=x//10
        n=tong
    return n
n= int(input())
if (xuli(n)==9):
    print('YES')
else:
    print('NO')