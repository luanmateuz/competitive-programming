L, D = map(int, input().split())
K, P = map(int, input().split())

t = L // D
result = (L * K) + (t * P)
print(result)
