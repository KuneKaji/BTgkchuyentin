def fibo(n):
    f1=0
    f2=1
    while (f2<=n):
        fn=f1+f2
        f1=f2
        f2=fn
    return f1
n=int(input())
while (n>0):
    print(fibo(n), end=' ')
    n=n-fibo(n)
