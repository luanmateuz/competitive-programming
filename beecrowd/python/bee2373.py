N = int(input())
result: int = 0

for _ in range(N):
    L, C = map(int, input().split())
    result += C if L > C else 0

print(result)
