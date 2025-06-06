import sys
sys.set_int_max_str_digits(1000000000)
n=int(input())
tich=1
for i in range(1,n+1):
    tich=tich*i
print(tich)