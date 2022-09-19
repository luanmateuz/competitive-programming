#include <stdio.h>

int main() {

    int n = 0, cont = 6;
    scanf("%i", &n);

    for (int i = 0; i < cont;)  {
        if (n % 2 != 0) {
            printf("%i\n", n);
            cont--;
        }
        n++;
    }

    return 0;
}