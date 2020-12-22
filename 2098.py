a, b = map(int, input().split())
a100 = a // 100
a10 = (a % 100) // 10
a1 = a % 10
x = a1 * 100 + a10 * 10 + a100
b100 = b // 100
b10 = (b % 100) // 10
b1 = b % 10
y = b1 * 100 + b10 * 10 + b100
print(max(x,y))
