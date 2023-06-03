#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int inteiro;
    int resto;
} numero;

void print_v(numero *v, int size) {
    for (int i = 0; i < size; i++) { printf("%d\n", v[i].inteiro); }
}

static void merge(numero *v, numero *v1, numero *v2, size_t size) {
    size_t size_v1 = size / 2;
    size_t size_v2 = size - size_v1;
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

    for (i = 0; j < size_v1 && k < size_v2; i++) {
        if (v1[j].resto <= v2[k].resto) {
            if (v1[j].resto == v2[k].resto) {
                if (v1[j].inteiro % 2 == 0 && v2[k].inteiro % 2 == 0) {
                    if (v1[j].inteiro <= v2[k].inteiro) {
                        v[i] = v1[j];
                        j++;
                    } else {
                        v[i] = v2[k];
                        k++;
                    }
                } else if (v1[j].inteiro % 2 != 0 && v2[k].inteiro % 2 != 0) {
                    if (v1[j].inteiro >= v2[k].inteiro) {
                        v[i] = v1[j];
                        j++;
                    } else {
                        v[i] = v2[k];
                        k++;
                    }
                } else if (v1[j].inteiro % 2 != 0 && v2[k].inteiro % 2 == 0) {
                    v[i] = v1[j];
                    j++;
                } else {
                    v[i] = v2[k];
                    k++;
                }
            } else {
                v[i] = v1[j++];
            }
        } else {
            v[i] = v2[k++];
        }
    }

    while (j < size_v1) { v[i++] = v1[j++]; }
    while (k < size_v2) { v[i++] = v2[k++]; }
}

void merge_sort(numero *v, size_t size) {
    size_t mid;
    if (size > 1) {
        mid = size / 2;
        numero *v1 = malloc(sizeof(numero) * mid);
        numero *v2 = malloc(sizeof(numero) * size - mid);
        int i;
        for (i = 0; i < mid; i++) { v1[i] = v[i]; }
        for (i = mid; i < size; i++) { v2[i - mid] = v[i]; }

        merge_sort(v1, mid);
        merge_sort(v2, size - mid);
        merge(v, v1, v2, size);

        free(v1);
        free(v2);
    }
}

int main() {
    int n, m = 0;
    int input = 0;

    for (;;) {
        scanf("%d %d", &n, &m);
        printf("%d %d\n", n, m);
        if (n == 0 && m == 0) { break; }

        numero *v = malloc(sizeof(numero) * n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &input);
            v[i].inteiro = input;
            v[i].resto = input % m;
        }

        merge_sort(v, n);
        print_v(v, n);

        free(v);
    }

    return 0;
}
