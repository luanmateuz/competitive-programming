"""Codeforces Round 1050 (Div. 4)"""

t = int(input())

for _ in range(t):
    result = 0

    n, m = map(int, input().split())
    reqs = [(0, 0)]
    for _ in range(n):
        a, b = map(int, input().split())
        reqs.append((a, b))

    for i in range(len(reqs) - 1):
        t1, s1 = reqs[i]
        t2, s2 = reqs[i + 1]
        dt = t2 - t1

        if (s1 ^ s2) == (dt % 2):
            result += dt
        else:
            result += dt - 1

    result += m - reqs[-1][0]
    print(result)
