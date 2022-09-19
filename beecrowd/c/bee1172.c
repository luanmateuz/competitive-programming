#include <stdio.h>

int main() {
    
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < SIZE; j++) {
        printf("X[%d] = %d\n", j, (arr[j] == 0 || arr[j] < 0 ? 1 : arr[j]));
    }

    return 0;
}