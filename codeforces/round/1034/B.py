"""Codeforces Round 1034 (Div. 3)"""


def solve() -> None:
    n, j, k = map(int, input().split())
    l = list(map(int, input().split()))
    mx = max(l)
    print("yes" if (k > 1 or mx == l[j - 1]) else "no")


t = int(input())
for _ in range(t):
    solve()
