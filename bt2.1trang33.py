def bin_to_dec(n):
    dem=0
    res=0
    while n>0:
        if (n%10==0):
            dem=dem+1
            n=n//10
        else:
            res=res+pow(2,dem)
            dem=dem+1
            n=n//10
    return res;
def dec_to_hex(n):
    res=[]
    while n>0:
        if n%16==0:
            res.append(0)
            n=n//16
        elif n%16==1:
            res.append(1)
            n=n//16
        elif n%16==2:
            res.append(2)
            n=n//16
        elif n%16==3:
            res.append(3)
            n=n//16
        elif n%16==4:
            res.append(4)
            n=n//16
        elif n%16==5:
            res.append(5)
            n=n//16
        elif n%16==6:
            res.append(6)
            n=n//16
        elif n%16==7:
            res.append(7)
            n=n//16
        elif n%16==8:
            res.append(8)
            n=n//16
        elif n%16==9:
            res.append(9)
            n=n//16
        elif n%16==10:
            res.append('A')
            n=n//16
        elif n%16==11:
            res.append('B')
            n=n//16
        elif n%16==12:
            res.append('C')
            n=n//16
        elif n%16==13:
            res.append('D')
            n=n//16
        elif n%16==14:
            res.append('E')
            n=n//16
        elif n%16==15:
            res.append('F')
            n=n//16
    return res[::-1];
n = int(input())
x = dec_to_hex(bin_to_dec(n))
for i in x:
    print(i,end='')