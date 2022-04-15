#include <stdio.h>

int main() {

    char name[32];
    double salary, total, result;

    scanf("%s%lf%lf", name, &salary, &total);
    result = (total * 0.15) + salary;
    printf("TOTAL = R$ %0.2lf\n", result);
    return 0;
}
