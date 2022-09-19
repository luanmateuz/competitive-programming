#include <stdio.h>

int main() {

    int count, quant, c = 0, r = 0, s = 0;
    char animal;
    
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%d %c", &quant, &animal);
        if (animal == 'C') c += quant;
        if (animal == 'R') r += quant;
        if (animal == 'S') s += quant;
    }

    int total = c+r+s;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", (c*100.0/total));
    printf("Percentual de ratos: %.2lf %%\n", (r*100.0/total));
    printf("Percentual de sapos: %.2lf %%\n", (s*100.0/total));
    

    return 0;
}