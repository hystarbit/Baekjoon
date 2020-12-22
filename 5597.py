students = [ i+1 for i in range(30)]
n = 1
while n <= 28:
    a = int(input())
    students.remove(a)
    n = n + 1
students = sorted(students)
print(students[0])
print(students[1])
