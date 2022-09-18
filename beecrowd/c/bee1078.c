#include <stdio.h>

int main() {

    int in = 0;
    scanf("%d", &in);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, in, (i*in));
    }

    return 0;
}