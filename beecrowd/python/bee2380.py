N, K = map(int, input().split())
p = {i: i for i in range(N + 1)}


def find(x: int) -> int:
    # recursion DONT WORK!
    while p[x] != x:
        p[x] = p[p[x]]
        x = p[x]
    return x


def union(a: int, b: int) -> None:
    p[find(a)] = find(b)


for _ in range(K):
    op, c1, c2 = input().split()
    c1 = int(c1)
    c2 = int(c2)

    if str(op) == "F":
        union(c1, c2)
    else:
        print("S" if find(c1) == find(c2) else "N")
