#include <cstdio>
#include <iostream>

int main() {

    int inp = 0;

    std::cin >> inp;

    for (int i = 1; i <= inp; i++) {
        if (inp % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
