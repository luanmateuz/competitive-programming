#include <stdio.h>

int main() {

    int int_n, int_m;
    double dou_value;

    scanf("%lf", &dou_value);
    printf("NOTAS:\n");
    int_n = (int)dou_value;
    int_m = (dou_value - int_n) * 100;
    printf("%d nota(s) de R$ 100.00\n", (int_n / 100));
    int_n %= 100;
    printf("%d nota(s) de R$ 50.00\n", (int_n / 50));
    int_n %= 50;
    printf("%d nota(s) de R$ 20.00\n", (int_n / 20));
    int_n %= 20;
    printf("%d nota(s) de R$ 10.00\n", (int_n / 10));
    int_n %= 10;
    printf("%d nota(s) de R$ 5.00\n", (int_n / 5));
    int_n %= 5;
    printf("%d nota(s) de R$ 2.00\n", (int_n / 2));
    int_n %= 2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int_n / 1));
    printf("%d moeda(s) de R$ 0.50\n", (int_m / 50));
    int_m %= 50;
    printf("%d moeda(s) de R$ 0.25\n", (int_m / 25));
    int_m %= 25;
    printf("%d moeda(s) de R$ 0.10\n", (int_m / 10));
    int_m %= 10;
    printf("%d moeda(s) de R$ 0.05\n", (int_m / 5));
    int_m %= 5;
    printf("%d moeda(s) de R$ 0.01\n", (int_m / 1));
    return 0;
}