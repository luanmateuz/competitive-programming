#include <stdio.h>

int main() {

    int st, as;
    double r;

    scanf("%d%d", &st, &as);
    r = (st * as / 12.0);
    printf("%0.3lf\n", r);
    return 0;
}
