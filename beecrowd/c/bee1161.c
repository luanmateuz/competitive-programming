#include <stdio.h>

int main() {

    long long int i, m, n, fatM, fatN, sum;

    while(scanf("%lld%lld", &m, &n) != EOF) {
        for (i = 0; i <= m; i++) {
            fatM *= i;
            if (fatM == 0) {
                fatM = 1;
            } 
        }
        for (i = 0; i <= n; i++) {
            fatN *= i;
            if (fatN == 0) {
                fatN = 1;
            } 
        }
        sum = fatM + fatN;
        printf("%lld\n", sum);
    }

    return 0;
}
