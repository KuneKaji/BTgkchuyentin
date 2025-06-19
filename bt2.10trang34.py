a,b = map(int,input().split())
f1=0
f2=1
cnt=0
while (f1<=b):
    if (f1>=a):
        cnt=cnt+1
    fn=f1+f2
    f1=f2
    f2=fn
print(cnt)