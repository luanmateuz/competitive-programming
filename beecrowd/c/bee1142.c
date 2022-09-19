#include <stdio.h>

int main() {
    int n, i = 0;

    scanf("%d", &n);

    for (int cont = 0; cont < n; cont++) {
        printf("%d %d %d PUM\n", (i+1), (i+2), (i+3));
        i+=4;
    }
    
    return 0;
}