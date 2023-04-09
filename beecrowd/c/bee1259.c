#include <stdio.h>
#include <stdlib.h>

void print_v(size_t n, int *v, char ord) {
    size_t i = 0;

    if (ord == 'c')
        for (; i < n; i++) printf("%d\n", v[i]);
    else
        for (i = n; i > 0; i--) printf("%d\n", v[i - 1]);
}

void merge(size_t size, int *v, int *v1, int *v2) {
    size_t size_v1 = size / 2;
    size_t size_v2 = size - size_v1;
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

    for (; j < size_v1 && k < size_v2; i++) {
        if (v1[j] <= v2[k]) {
            v[i] = v1[j++];
        } else {
            v[i] = v2[k++];
        }
    }

    for (; j < size_v1;) { v[i++] = v1[j++]; }
    for (; k < size_v2;) { v[i++] = v2[k++]; }
}

void merge_sort(size_t size, int *v) {
    if (size > 1) {
        size_t mid = size / 2;

        int *v1 = malloc(sizeof(int) * mid);
        if (v1 == NULL) printf("Impossivel alocar memoria!\n");
        int *v2 = malloc(sizeof(int) * size - mid);
        if (v2 == NULL) printf("Impossivel alocar memoria!\n");

        for (int i = 0; i < mid; i++) { v1[i] = v[i]; }

        for (int i = mid; i < size; i++) { v2[i - mid] = v[i]; }

        merge_sort(mid, v1);
        merge_sort(size - mid, v2);
        merge(size, v, v1, v2);

        free(v2);
        free(v1);
    }
}

int main() {
    // solution using mergesort algorithm, another options is heapsort
    size_t i = 0;
    size_t cont_p = 0;
    size_t cont_i = 0;
    unsigned int n = 0;
    unsigned int inp = 0;

    scanf("%d", &n);

    int *v1 = malloc(sizeof(int));
    int *v2 = malloc(sizeof(int));

    for (; i < n; i++) {
        fflush(stdin);
        scanf("%d", &inp);
        if (inp % 2 == 0) {
            v1 = realloc(v1, sizeof(int) * (cont_p + 1));
            v1[cont_p++] = inp;
        } else {
            v2 = realloc(v2, sizeof(int) * (cont_i + 1));
            v2[cont_i++] = inp;
        }
    }

    merge_sort(cont_p, v1);
    merge_sort(cont_i, v2);

    print_v(cont_p, v1, 'c');
    print_v(cont_i, v2, 'd');

    free(v1);
    free(v2);

    return 0;
}
