N = int(input())
sum_score = 0
sum_credit = 0
for k in range(N):
    subject, credit, grade = input().split()
    if grade == 'A+':
        score = 4.3
    elif grade == 'A0':
        score = 4.0
    elif grade == 'A-':
        score = 3.7
    elif grade == 'B+':
        score = 3.3
    elif grade == 'B0':
        score = 3.0
    elif grade == 'B-':
        score = 2.7
    elif grade == 'C+':
        score = 2.3
    elif grade == 'C0':
        score = 2.0
    elif grade == 'C-':
        score = 1.7
    elif grade == 'D+':
        score = 1.3
    elif grade == 'D0':
        score = 1.0
    elif grade == 'D-':
        score = 0.7
    elif grade == 'F':
        score = 0.0
    sum_score +=int(credit) * score
    sum_credit += int(credit)
average_score = sum_score / sum_credit
print(round(average_score, 2))
