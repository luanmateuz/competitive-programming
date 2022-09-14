#include <stdio.h>

int main() {
    double t = 0.0, v = 0.0;

    scanf("%lf",&v);
    if (v <= 2000.00) {
        printf("Isento\n");
    } else {
        if (v <= 3000.00) {
            t = (v - 2000.0) * 0.08;
        } else if (v <= 4500.00) {
            t = 1000.0 * 0.08 + (v - 3000.0) * 0.18;
        } else {
            t =1000.0 * 0.08 + 1500.0 * 0.18 + (v - 4500.0) * 0.28;
        }

        printf("R$ %.2lf\n", (t));
    }

    return 0;
}