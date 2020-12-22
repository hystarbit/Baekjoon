N = int(input())
k = 1
remainder_sum = 0
while k <= N:
    student , apple = map(int, input().split())
    remainder = apple % student
    remainder_sum += remainder
    k = k + 1
print(remainder_sum)
