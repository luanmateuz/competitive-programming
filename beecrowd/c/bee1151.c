#include <stdio.h>

int main() {
    int inp, temp, n1 = 0, n2 = 1;

    scanf("%d", &inp);

    printf("0 1");
    for (int i = 0; i < inp - 2; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        printf(" %d", temp);
    }
    printf("\n");

    return 0;
}
