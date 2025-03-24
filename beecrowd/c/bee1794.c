#include <stdio.h>

int main() {
    int N, LA, LB, SA, SB, ans = 0;
    scanf("%d", &N);
    scanf("%d %d %d %d", &LA, &LB, &SA, &SB);

    if ((N <= LB && N >= LA) && (N <= SB && N >= SA)) {
        ans = 1;
    }
    printf("%s\n", ans ? "possivel" : "impossivel");
    return 0;
}
