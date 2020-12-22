N = int(input())
n = 1
temp = []
while n <= N:
    a = int(input())
    temp.append(a)
    n = n + 1
result = sorted(temp)
for item in result:
    print(item)
