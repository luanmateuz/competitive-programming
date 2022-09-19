#include <stdio.h>

int main() {

    int size = 0;
    double v1, v2, v3;

    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        scanf("%lf %lf %lf", &v1, &v2, &v3);
        printf("%.1f\n", (v1*2 + v2* 3 + v3*5)/10);
    }

    return 0;
}