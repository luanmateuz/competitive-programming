#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    if (*(unsigned *)a == *(unsigned *)b)
        return 0;
    else if (*(unsigned *)a > *(unsigned *)b)
        return 1;
    else
        return -1;
}

int search(unsigned number, unsigned short len_vet, unsigned *vet) {
    int smaller = 0;
    int bigger = len_vet - 1;

    for (; smaller <= bigger;) {
        int mid = (smaller + bigger) / 2;

        if (vet[mid] == number) {
            return mid;
        } else if (vet[mid] > number) {
            bigger = mid - 1;
        } else {
            smaller = mid + 1;
        }
    }

    return -1;
}

int main() {
    unsigned short n = 1;
    unsigned short q = 1;
    unsigned inp = 0;
    unsigned short n_case = 0;
    unsigned *v = NULL;

    for (;;) {
        scanf("%hu %hu", &n, &q);
        if (n == 0 && q == 0) break;

        v = malloc(sizeof(unsigned) * n);
        for (int i = 0; i < n; i++) {
            scanf("%u", &inp);
            v[i] = inp;
        }

        qsort(v, q, sizeof(unsigned), comp);

        ++n_case;
        printf("CASE# %d:\n", n_case);
        for (int j = 0; j < q; j++) {
            scanf("%u", &inp);

            int p = search(inp, n, v);
            if (p != -1) {
                if (v[p - 1] == v[p]) {
                    while (v[p - 1] == v[p]) { p--; }
                    printf("p=%d %d found at %d\n", p, inp, p + 1);
                } else
                    printf("%d found at %d\n", inp, p + 1);
            } else {
                printf("%d not found\n", inp);
            }
        }

        free(v);
    }

    return 0;
}
