Q, E = [int(x) for x in input().split()]
last_2_d = [int(x) for x in input().split()]
last_week = [int(input()) for _ in range(Q)]

for office in last_week:
    if office in last_2_d:
        print(0)
    else:
        print(1)
        last_2_d.append(office)
