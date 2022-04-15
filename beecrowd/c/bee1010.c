#include <stdio.h>

int main() {

    int cod, qtd;
    double val, res;

    scanf("%d%d%lf", &cod, &qtd, &val);
    res = (qtd * val);
    scanf("%d%d%lf", &cod, &qtd, &val);
    res += (qtd * val);
    printf("VALOR A PAGAR: R$ %0.2lf\n", res);
    return 0;
}
