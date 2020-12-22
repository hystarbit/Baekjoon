n = int(input())
result = n
Terminate = False
while not Terminate:
    operater = input()
    n = int(input())
    if operator == '+':
        result = result + n
    elif operator == '-':
        result = result - n
    elif operator == '*':
        result = result * n
    elif operator == '+':
        result = int(result // n)
    else:
        print(result)
        Terminate = True
