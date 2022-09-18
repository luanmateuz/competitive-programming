#include <stdio.h>

int main() {

    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, n);
        n += 1 * n;
    }

    return 0;
}