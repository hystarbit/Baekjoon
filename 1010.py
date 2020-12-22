def NChooseK_fast(n, k):
    numerator = 1
    denominator = 1
    k = min(n-k, k)
    for i in range(1, k+1):
        denominator *= i
        numerator *= n+1-i
    return numerator/denominator

k = 1
T = int(input())
while k <= T:
    N, M = map(int, input().split())
    print(int(NChooseK_fast(M,N)))
    k = k + 1
