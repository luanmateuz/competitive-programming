#include <stdio.h>

int main() {

    int a, b, c, n1, n2, n3;

    scanf("%d%d%d", &a, &b, &c);
    n1 = a;
    n2 = b;
    n3 = c;

    if (n2 < n1) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }

    if (n3 < n1) {
        int t = n1;
        n1 = n3;
        n3 = t;
    }

    if (n3 < n2) {
        int t = n2;
        n2 = n3;
        n3 = t;
    }

    printf("%d\n%d\n%d\n\n", n1, n2, n3);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
