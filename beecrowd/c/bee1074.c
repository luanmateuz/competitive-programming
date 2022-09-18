#include <stdio.h>

int main() {

    int value, size = 0;
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        scanf("%d", &value);

        if (value == 0) {
            printf("NULL\n");
        } else {
            if (value % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }
            if (value > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}