#include <stdio.h>

int main() {
    long long int A, B, result;

    scanf("%lld %lld", &A, &B);

    result = (B * (1 + B) / 2) - ((A - 1) * (1 + (A - 1)) / 2);
    printf("%lld\n", result);

    return 0;
}
