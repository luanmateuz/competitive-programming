#include <stdio.h>

int main() {
    long long int Q, cont = 0;
    int inp;

    scanf("%lld", &Q);
    for (long long int i = 0; i < Q; i++) {
        scanf("%d", &inp);
        if (inp == 0) {
            cont++;
        }
    }

    printf("%c\n", cont > (Q - cont) ? 'Y' : 'N');

    return 0;
}
