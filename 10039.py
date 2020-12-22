score = []
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
sum_score = 0
score.append(a)
score.append(b)
score.append(c)
score.append(d)
score.append(e)
for k in score:
    if k < 40:
        k = 40
    sum_score += k
average_score = sum_score / 5
print(int(average_score))
