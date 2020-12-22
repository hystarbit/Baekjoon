hour, minute, second = map(int, input().split())
time = int(input())
new_time = 3600 * hour + 60 * minute + second + time
new_time = new_time % 86400
new_hour = new_time // 3600
new_minute = (new_time % 3600) // 60
new_second = new_time % 60
print(new_hour, new_minute, new_second)
