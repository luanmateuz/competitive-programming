"""Codeforces Round 1050 (Div. 4)"""

t = int(input())

for _ in range(t):
    n, m, x, y = map(int, input().split())
    n_ints = list(map(int, input().split()))
    m_ints = list(map(int, input().split()))

    print(len(n_ints) + len(m_ints))
