#include <stdio.h>

int main() {

    double n = 0, aux = 0;
    int cont = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &n);
        if (n > 0) {
            cont++;
            aux += n;
        }
    }

    printf("%d valores positivos\n%.1lf\n", cont, (aux/cont));


    return 0;
}