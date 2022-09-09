#include <stdio.h>

int main() {
    double salary = 0;
    double inc = 0;

    scanf("%lf", &salary);

    if (salary >= 0 && salary <= 400) {
        inc = 0.15;
    }
    else if (salary > 400 && salary <= 800) {
        inc = 0.12;
    }
    else if (salary > 800 && salary <= 1200) {
        inc = 0.10;
    }
    else if (salary > 1200 && salary <= 2000) {
        inc = 0.07;
    }
    else {
        inc = 0.04;
    }

    printf("Novo salario: %.2lf\n", (salary+(salary*inc)));
    printf("Reajuste ganho: %.2lf\n", (salary*inc));
    printf("Em percentual: %.0lf %%\n", (100*inc));

    return 0;
}
