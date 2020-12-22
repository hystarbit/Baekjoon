n = 1
scores = []
sum_score = 0
while n <= 8:
    score = int(input())
    scores.append([score, n])
    n = n + 1
scores = sorted(scores, key=lambda student: student[0])
for k in range(3, 8):
    sum_score += scores[k][0]
print(sum_score)
order= [scores[3][1], scores[4][1], scores[5][1], scores[6][1], scores[7][1]]
order = sorted(order)
print(order[0], order[1], order[2], order[3], order[4])
