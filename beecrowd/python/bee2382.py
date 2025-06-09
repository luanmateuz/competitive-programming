import math

L, A, P, R = map(int, input().split())

r = math.sqrt(L**2 + A**2 + P**2)
print("S" if r <= (R * 2) else "N")
