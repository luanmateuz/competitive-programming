#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    int n_h;
    int n_c;
    double m;
} data;

// -1 : d1 less than d2 (d1 before d2)
//  1 : d1 greather than d2 (d2 before d1)
//  0 : d1 equals d2
int comp(const void* d1, const void* d2) {
    data* p1 = (data*)d1;
    data* p2 = (data*)d2;

    if (p1->m > p2->m) {
        return 1;
    } else if (p1->m < p2->m) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n_input, c = 1;

    for (; scanf("%d", &n_input) && n_input != 0;) {
        data* arr = malloc(sizeof(data) * n_input);
        double t_h = 0;
        double t_c = 0;

        for (int i = 0; i < n_input; i++) {
            scanf("%d %d", &arr[i].n_h, &arr[i].n_c);
            arr[i].m = (double)arr[i].n_c / arr[i].n_h;
            t_h += arr[i].n_h;
            t_c += arr[i].n_c;
        }

        // quicksort
        qsort(arr, n_input, sizeof(data), comp);

        printf("Cidade# %d:\n", c++);
        for (int cont = 0; cont < n_input; cont++) {
            int cont_h = arr[cont].n_h;
            for (; cont + 1 < n_input;) {
                if (floor(arr[cont].m) == floor(arr[cont + 1].m)) {
                    cont_h += arr[cont + 1].n_h;
                    cont++;
                } else {
                    break;
                }
            }
            printf("%d-%.0lf%c", cont_h, floor(arr[cont].m),
                   (cont == n_input - 1) ? '\n' : ' ');
        }

        double r = floor((t_c / t_h) * 100) / 100.0;
        printf("Consumo medio: %.2lf m3.\n\n", r);

        free(arr);
    }

    return 0;
}
