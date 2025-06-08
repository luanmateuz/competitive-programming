N = int(input())
result: int = 0

for _ in range(N):
    T, V = map(int, input().split())
    result += T * V

print(result)
