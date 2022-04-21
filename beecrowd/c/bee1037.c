#include <stdio.h>

int main() {

    double number;

    scanf("%lf", &number);
    if (number < 0 || number > 100) {
        printf("Fora de intervalo");
    } else if (number <= 25) {
        printf("Intervalo [0,25]");
    } else if (number > 25 && number <= 50) {
        printf("Intervalo (25,50]");
    } else if (number > 50 && number <= 75) {
        printf("Intervalo (50,75]");
    } else {
        printf("Intervalo (75,100]");
    }
    printf("\n");
    return 0;
}
