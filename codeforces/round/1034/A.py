"""Codeforces Round 1034 (Div. 3)"""


def solve() -> None:
    v = int(input())
    if v % 4 == 0:
        print("bob")
    else:
        print("alice")


t = int(input())
for _ in range(t):
    solve()
