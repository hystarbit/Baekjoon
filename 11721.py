word = input()
N = len(word)
n = 0
while n < N//10:
    print(word[10*n:10*n + 10])
    n = n + 1
if N % 10 != 0:
    print(word[(N//10)*10:N])
