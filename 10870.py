a = 0
b = 1
k = 1
n = int(input())
while k < n:
    c = b + a
    a = b
    b = c
    k = k + 1
print(c)
