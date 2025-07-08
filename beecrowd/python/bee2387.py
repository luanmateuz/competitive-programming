N = int(input())

result: int = 1

hours: list[tuple[int, int]] = []

for _ in range(N):
    x, y = map(int, input().split())
    hours.append((x, y))

hours.sort(key=lambda x: (x[1], x[0]))

last_consult = hours[0][1]

for i in range(1, N):
    first_consult = hours[i][0]
    if first_consult >= last_consult:
        result += 1
        last_consult = hours[i][1]


print(result)
