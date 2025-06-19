def convert_base(s, a, b):
    decimal = int(s, a)
    if decimal == 0:
        return '0'
    digits = "0123456789ABCDEF"
    res = ""
    while decimal > 0:
        res = digits[decimal % b] + res
        decimal //= b
    return res
s = input().upper()
a = int(input())
b = int(input())
print(convert_base(s, a, b))
