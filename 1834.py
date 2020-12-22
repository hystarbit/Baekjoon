N = int(input())
s = 0
for k in range(1, N):
    number = N * k + k
    s += number
print(s)
