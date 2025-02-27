#include <stdio.h>
#include <string.h>

void insertion_sort(char (*arr)[5], int len) {
    for (int i = 1; i < len; i++) {
        char temp[5];
        strcpy(temp, arr[i]);
        int pos = i - 1;
        for (; pos >= 0 && (strcmp(arr[pos], temp) > 0);) {
            strcpy(arr[pos + 1], arr[pos]);
            pos--;
        }
        strcpy(arr[pos + 1], temp);
    }
}

int main() {
    unsigned int n_input;
    for (; scanf("%d", &n_input) != EOF;) {
        char arr[n_input][5];
        for (int i = 0; i < n_input; i++) {
            scanf("%s", arr[i]);
        }
        // yes, insertion sort
        insertion_sort(arr, n_input);
        for (int i = 0; i < n_input; i++) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}
