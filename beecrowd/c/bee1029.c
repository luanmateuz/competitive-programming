#include <stdio.h>

int f_result = 0;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    f_result += 2;
    return fib(n-1) + fib(n-2);
}

int main() {
    int c = 0, inp = 0;
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        scanf("%d", &inp);
        printf("fib(%d) = %d calls = %d\n", inp, f_result, fib(inp));
        f_result = 0;
    }
    return 0;
}
