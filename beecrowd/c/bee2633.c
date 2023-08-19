#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct churras {
    char name[21];
    int dt;
} churras;

void printf_result(churras *c, size_t size) {
    for (int i = 0; i < size; i++) {
        if (i != 0 && i != size) {
            printf(" ");
        }

        printf("%s", c[i].name);
    }
    printf("\n");
}

static void merge(churras *v, churras *v1, churras *v2, size_t size) {
    size_t size_v1 = size / 2;
    size_t size_v2 = size - size_v1;
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

    for (i = 0; j < size_v1 && k < size_v2; i++) {

        if (v1[j].dt <= v2[k].dt) {
            v[i] = v1[j++];
        } else {
            v[i] = v2[k++];
        }
    }

    while (j < size_v1) {
        v[i++] = v1[j++];
    }
    while (k < size_v2) {
        v[i++] = v2[k++];
    }
}

void merge_sort(churras *v, size_t size) {
    size_t mid;
    if (size > 1) {
        mid = size / 2;
        churras *v1 = malloc(sizeof(churras) * mid);
        churras *v2 = malloc(sizeof(churras) * size - mid);
        int i;
        for (i = 0; i < mid; i++) {
            v1[i] = v[i];
        }
        for (i = mid; i < size; i++) {
            v2[i - mid] = v[i];
        }
        merge_sort(v1, mid);
        merge_sort(v2, size - mid);
        merge(v, v1, v2, size);

        free(v1);
        free(v2);
    }
}

int main() {

    unsigned int qtd = 0;

    for (; scanf("%d", &qtd) != EOF;) {

        churras *c = malloc(sizeof(churras) * qtd);

        for (int i = 0; i < qtd; i++) {
            scanf("%s %d", c[i].name, &c[i].dt);
        }

        merge_sort(c, qtd);

        printf_result(c, qtd);

        free(c);
    }

    return 0;
}
