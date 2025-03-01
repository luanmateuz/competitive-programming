#include <stdio.h>

int main() {
    long long int c = 0, inp;
    scanf("%lld", &c);
    for (int i = 0; i < c; i++) {
        scanf("%lld", &inp);
        long long int before = 0, current = 1, next;
        for (long long int j = 0; j < inp; j++) {
            next = before + current;
            before = current;
            current = next;
        }
        printf("Fib(%lld) = %lld\n", inp, before);
    }

    return 0;
}
