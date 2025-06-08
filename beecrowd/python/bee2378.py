def solution(n: int, c: int) -> str:
    state = 0
    for _ in range(n):
        S, E = map(int, input().split())
        if state + E - S > c:
            return "S"
        state += E - S
    return "N"


N, C = map(int, input().split())
print(solution(N, C))
