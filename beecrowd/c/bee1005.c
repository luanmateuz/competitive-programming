#include <stdio.h>

int main() {

    double a, b, m;

    scanf("%lf%lf", &a, &b);
    m = ((a * 3.5) + (b * 7.5)) / 11;
    printf("MEDIA = %0.5f\n", m);
    return 0;
}
