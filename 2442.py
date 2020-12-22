N = int(input())
k = 1
while k <= N:
    print(' '*(N-k)+'*'*(2*k-1)+' '*(N-k))
    k = k + 1
