N = int(input())
T = [int(input()) for _ in range(N)]

t_temp = 0
last_temp = -1

for t in T:
    if t > last_temp:
        t_temp += 10
    else:
        t_temp += t + 10 - last_temp

    last_temp = t + 10

print(t_temp)
