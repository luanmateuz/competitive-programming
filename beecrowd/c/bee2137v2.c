#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *arr, int len) {
    for (int i = 1; i < len; i++) {
        int temp = arr[i];
        int pos = i - 1;
        for (; pos >= 0 && arr[pos] > temp;) {
            arr[pos + 1] = arr[pos];
            pos--;
        }
        arr[pos + 1] = temp;
    }
}

int main() {
    unsigned int n_input;
    for (; scanf("%d", &n_input) != EOF;) {
        int *arr = malloc(sizeof(int) * n_input);
        for (int i = 0; i < n_input; i++) {
            scanf("%d", &arr[i]);
        }
        insertion_sort(arr, n_input);
        for (int i = 0; i < n_input; i++) {
            printf("%04d\n", arr[i]);
        }
        free(arr);
    }

    return 0;
}
