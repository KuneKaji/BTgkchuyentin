def gcd(a,b):
    if (b==0):
        return a
    return gcd(b,a%b)
def lcm(a,b):
    x=a*b
    return x//gcd(a,b)
a = list(map(int,input().split()))
x=a[0]
y=a[0]
for i in range(1,len(a)):
    y=gcd(y,a[i])
print(y)
for i in range(1,len(a)):
    x=lcm(x,a[i])
print(x)