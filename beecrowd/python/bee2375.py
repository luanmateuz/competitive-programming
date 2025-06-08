N = int(input())
result = True

for x in input().split():
    if int(x) >= N:
        continue
    else:
        result = False

print("S" if result else "N")
