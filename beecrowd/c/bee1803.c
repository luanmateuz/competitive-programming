#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char l1[82], l2[82], l3[82], l4[82];
    char F[5], L[5], M[5];

    scanf("%s %s %s %s", l1, l2, l3, l4);
    int N = strlen(l1);

    F[0] = l1[0];
    F[1] = l2[0];
    F[2] = l3[0];
    F[3] = l4[0];
    F[4] = '\0';

    L[0] = l1[N - 1];
    L[1] = l2[N - 1];
    L[2] = l3[N - 1];
    L[3] = l4[N - 1];
    L[4] = '\0';

    for (int i = 1; i < N - 1; i++) {
        M[0] = l1[i];
        M[1] = l2[i];
        M[2] = l3[i];
        M[3] = l4[i];
        M[4] = '\0';
        int c = ((atoi(F) * atoi(M)) + atoi(L)) % 257;
        printf("%c", c);
    }

    printf("\n");

    return 0;
}
