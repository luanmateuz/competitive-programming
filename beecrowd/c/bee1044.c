#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);

    printf((a % b == 0 || b % a == 0) ? "Sao Multiplos" : "Nao sao Multiplos");
    printf("\n");
    return 0;
}
