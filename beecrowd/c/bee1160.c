#include <stdio.h>

int main() {
    long c, pa, pb;

    scanf("%ld", &c);

    for (int i = 0; i < c; i++) {
        double g1, g2;
        int years = 0;

        scanf("%ld %ld %lf %lf", &pa, &pb, &g1, &g2);

        g1 = (1 + g1 / 100);
        g2 = (1 + g2 / 100);

        for (; pa <= pb;) {
            years++;
            pa *= g1;
            pb *= g2;

            if (years > 100) {
                break;
            }
        }
        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}
