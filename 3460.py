n = int(input())
b = bin(n)
print(b)
for k in range(len(b)):
    if b[k] == 1:
        print(k, end= ' ')
