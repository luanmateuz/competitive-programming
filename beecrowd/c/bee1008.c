#include <stdio.h>

int main() {

    int n, h;
    double s;

    scanf("%d%d%lf", &n, &h, &s);
    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", n, (h * s));
    return 0;
}
