#include <stdio.h>

int main() {
    int a, b, h;

    scanf("%d %d", &a, &b);
    h = a >= b ? (-a +24 + b) : (- a + b);
    printf("O JOGO DUROU %d HORA(S)\n", h);

    return 0;
}
