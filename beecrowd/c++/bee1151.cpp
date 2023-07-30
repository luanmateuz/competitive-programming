#include <cstdio>
#include <iostream>

int main() {
    int n1{0}, n2{1}, temp, inp;

    std::cin >> inp;

    std::cout << "0 1";

    for (int i = 0; i < inp - 2; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        printf(" %d", temp);
    }
    std::cout << "\n";

    return 0;
}
