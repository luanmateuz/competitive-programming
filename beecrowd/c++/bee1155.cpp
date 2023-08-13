#include <iomanip>
#include <iostream>

int main() {

    double r = 0.0;

    for (int i = 1; i <= 100; i++) {
        r += 1 / (double) i;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << r << "\n";

    return 0;
}

