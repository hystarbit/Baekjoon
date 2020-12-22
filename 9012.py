mystack = []
T = int(input())
n = 1
while n <= T:
    characters = input()
    for item in range(len(characters)):
        if characters[item] == '(':
            mystack.append(item)
        elif characters[item] == ')' and mystack[len(mystack)-1] == '(':
            mystack.remove(mystack[len(mystack)-1])
        else:
            break
    if mystack == []:
        print('Yes')
    else:
        print('No')
    n = n + 1
