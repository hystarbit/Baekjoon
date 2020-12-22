A, B, C = map(int, input().split())
if C - B <= 0:
    print('-1')
else:
    point = int(A / (C - B)) + 1
    print(point)
