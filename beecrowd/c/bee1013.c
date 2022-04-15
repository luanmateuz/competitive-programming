#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, r;

    scanf("%d%d%d", &a, &b, &c);
    r = (a + b + abs(a - b)) / 2;
    r = (r + c + abs(r - c)) / 2;
    printf("%d eh o maior\n", r);
    return 0;
}
