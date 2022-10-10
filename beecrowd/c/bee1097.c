#include <stdio.h>

int main() {
    int cont = 7, temp;
    for (int i = 1;i <= 9; i += 2) {
        temp = cont;
        for (int j = 0; j < 3; j++) {
            printf("I=%d J=%d\n", i, temp--);
            
        }
        
        cont += 2;
    }
    
    return 0;
}