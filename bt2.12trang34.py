n= int(input())
if (n==0):
    print('0')
else:
    k=1
    cnt=0
    while (5**k<=n):
       cnt=cnt+(n//(5**k))
       k=k+1
    print(cnt)