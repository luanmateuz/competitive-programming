#include <stdio.h>

int main() {

    int input, pos, max = 0;

    for(int i = 0; i < 100; i++) {
        scanf("%d", &input);
        if (input > max) {
            max = input;
            pos = i + 1;
        }
    }

    printf("%d\n%d\n", max, pos);

    return 0;
}