#include <iostream>

using namespace std;

long long fat(long long v) {
    if (v == 0) return 1;
    return v * fat(v - 1);
}

int main() {
    long long inp{0};

    cin >> inp;

    cout << fat(inp) << "\n";

    return 0;
}
