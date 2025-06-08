teams = [chr(ord("A") + i) for i in range(16)]
results = [tuple(map(int, input().split())) for _ in range(15)]


result_index = 0

while len(teams) > 1:
    rounds: list[str] = []
    for i in range(0, len(teams), 2):
        t1 = teams[i]
        t2 = teams[i + 1]
        g1, g2 = results[result_index]

        win = t1 if g1 > g2 else t2
        rounds.append(win)
        result_index += 1

    teams = rounds

print(teams[0])
