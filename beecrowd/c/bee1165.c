#include <math.h>
#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int N = 0, inp = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &inp);
        printf("%d %s\n", inp, (is_prime(inp) ? "eh primo" : "nao eh primo"));
    }

    return 0;
}
