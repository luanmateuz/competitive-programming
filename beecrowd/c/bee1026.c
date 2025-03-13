#include <stdio.h>

int main() {
    unsigned long long inp1, inp2, res;

    for (; scanf("%lld %lld", &inp1, &inp2) != EOF;) {
        // xor
        res = (inp1 ^ inp2);
        printf("%lld\n", res);
    }

    return 0;
}
