#include <stdio.h>
#include <math.h>

int main() {

    int r;
    double result, pi = 3.14159;
    
    scanf("%i", &r);
    result = (4.0/3) * pi * pow(r, 3);
    printf("VOLUME = %0.3lf\n", result);
    return 0;
}
