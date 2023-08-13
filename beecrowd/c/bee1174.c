#include <stdio.h>
#include <stdlib.h>

int main() {

    int LEN = 100;
    double *vet = malloc(sizeof(double) * LEN);

    for (int i = 0; i < LEN; i++)
        scanf("%lf", &vet[i]);

    for (int i = 0; i < LEN; i++)
        if (vet[i] <= 10.0)
            printf("A[%d] = %.1lf\n", i, vet[i]);

    free(vet);

    return 0;
}
