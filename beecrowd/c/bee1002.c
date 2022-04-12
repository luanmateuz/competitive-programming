#include <stdio.h>

int main() {
    double n = 3.14159;
    double r;

    scanf("%lf", &r);
    printf("A=%0.4f\n", (n * (r*r)));
    return 0;
}
