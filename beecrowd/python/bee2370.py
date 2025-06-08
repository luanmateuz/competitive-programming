from typing import TypeAlias

data: TypeAlias = tuple[str, int]

N, T = map(int, input().split())

l: list[data] = []
for _ in range(N):
    name, h = input().split()
    l.append((name, int(h)))

l.sort(key=lambda k: (k[1], k[0]), reverse=True)

teams: list[list[data]] = [[] for _ in range(T)]
for idx, p in enumerate(l):
    team_id = idx % T
    teams[team_id].append(p)

for idx, t in enumerate(teams):
    print(f"Time {idx + 1}")
    t.sort()
    for name, _ in t:
        print(name)
    print()
