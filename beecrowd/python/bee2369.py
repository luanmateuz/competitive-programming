N = int(input())
result: int = 7

if N > 100:
    result += (N - 100) * 5
if N > 30:
    result += (min(N, 100) - 30) * 2
if N > 10:
    result += (min(N, 30) - 10) * 1

print(result)
