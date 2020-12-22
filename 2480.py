a, b, c = map(int, input().split())
if a == b and b == c:
    price = 10000 + a * 1000
elif a == b and b != c:
    price = 1000 + a * 100
elif b == c and c != a:
    price = 1000 + b * 100
elif c == a and a != b:
    price = 1000 + c * 100
else:
    price = max(a, b, c) * 100
print(price)
