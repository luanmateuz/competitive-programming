#include <stdio.h>

int main() {
    int i = 1, j = 60;

    for (;;) {
        printf("I=%d J=%d\n", i, j);

        if (j == 0) break;
        i += 3;
        j -= 5;
    }
    
    return 0;
}