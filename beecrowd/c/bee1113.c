#include <stdio.h>

int main() {

    int x, y;

    for (;;) {
        scanf("%d %d", &x, &y);

        if (x == y) break;

        printf("%s\n", (x < y ? "Crescente" : "Decrescente"));
    }

    return 0;
}
