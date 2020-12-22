Terminate = False
while not Terminate:
    a , b = map(int, input().split())
    if a == 0 and b == 0:
        Terminate = True
    print(a + b)
