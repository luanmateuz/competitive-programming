#include <stdio.h>

int main() {

    int n, posi = 0, nega = 0, even = 0, odd = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n > 0) {
            posi++;
        } 
        if (n < 0) {
            nega++;
        }
        if (n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, posi, nega);

    return 0;
}