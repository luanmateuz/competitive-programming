A, B = [int(x) for x in input().split()]

r =  A // abs(B)
q = A % abs(B)

if B < 0:
    r = -r

print(f"{r} {q}")
