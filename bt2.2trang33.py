import math as m
n=int(input())
ts=[]
#câu a
for i in range(2,int(m.sqrt(n))+1):
    dem=0
    while (n%i==0):
        n=n//i
        dem=dem+1
    if (dem!=0):
        ts.append(i)
        ts.append(dem)
if (n>1):
    ts.append(n)
    ts.append(1)
for i in range(0,len(ts)-1,2):
    print(ts[i],end="^")
    print(ts[i+1],end=" ")
    if (i<len(ts)-2):
        print("x",end=" ")
print()
#câu b
res=1
for i in range(1,len(ts),2):
    res=res*(ts[i]+1)
print(res)
#câu c
res=1
for i in range(0,len(ts),2):
    res=res*((pow(ts[i],ts[i+1]+1)-1)//(ts[i]-1))
print(res)