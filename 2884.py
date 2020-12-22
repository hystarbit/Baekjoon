H, M = map(int, input().split())
T = H * 60 + M
new_T = T - 45
if new_T < 0:
    new_T = new_T + 1440
new_H = int(new_T // 60)
new_M = int(new_T % 60)
print(new_H, new_M)
