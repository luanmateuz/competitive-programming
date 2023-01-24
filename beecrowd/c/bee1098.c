#include <stdio.h>

int main() {
    int cont = 0;
    float num_i, num_j, dot_2 = 0.2f;

    num_i = 0;

    for (;;) {
        if (num_i > 2.1) break;

        num_j = 0;
        
        for (int j = 0; j < 3; j++) {
            num_j += 1;
            printf("I=%g J=%g\n", num_i, (num_j + (cont * dot_2)));
        }
        
        cont++;
        num_i += dot_2;
    }
    
    return 0;
}
