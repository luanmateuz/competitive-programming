#include <stdio.h>

int main() {

    int a, b, c, i, j, temp;
    int vet[3];

    scanf("%d%d%d", &a, &b, &c);
    vet[0] = a;
    vet[1] = b;
    vet[2] = c;

    // for loop with 'int i/j = 0' only c99 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) {
            if (vet[i] < vet[j]) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
        
    }
    
    printf("%d\n%d\n%d\n\n", vet[0], vet[1], vet[2]);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
