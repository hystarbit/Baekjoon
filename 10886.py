N = int(input())
yes = 0
no = 0
for i in range(1, N+1):
    opinion = int(input())
    if opinion == 1:
        yes += 1
    elif opinion == 0:
        no += 1
if yes > no:
    print('Junhee is cute!')
elif yes < no:
    print('Junhee is not cute!')
