#include <cstdio>
#include <iostream>

int main() {

    const int LEN{100};
    double vet[LEN];

    for (int i = 0; i < LEN; i++)
        std::cin >> vet[i];

    for (int i = 0; i < LEN; i++)
        if (vet[i] <= 10.0)
            printf("A[%d] = %.1lf\n", i, vet[i]);

    return 0;
}
