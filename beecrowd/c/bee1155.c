#include <stdio.h>

int main() {
    double r = 0.0;

    for (int i = 1; i <= 100; i++) {
        r += 1 / (double)i;
    }

    printf("%.2f\n", r);

    return 0;
}
