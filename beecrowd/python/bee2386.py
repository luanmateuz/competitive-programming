A = int(input())
N = int(input())

r = 0
for _ in range(N):
    F = int(input())
    if F * A >= 40_000_000:
        r += 1

print(r)
