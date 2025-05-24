def solution(x1:int, y1:int, x2:int, y2 : int) -> int:
    if x1 == x2 and y1 == y2:
        return 0

    if abs(x1 - x2) == abs(y1 - y2) or x1 == x2 or y1 == y2:
        return 1

    return 2
    

while True:
    x1, y1, x2, y2 = [int(x) for x in input().split()]

    if x1 == 0 and  x2 == 0 and  y1 == 0 and y2 == 0:
        break

    r = solution(x1, y1, x2, y2)
    print(r)
