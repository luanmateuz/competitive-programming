#include <stdio.h>

int main() {

    int code;
    double quantity, amount;

    scanf("%d%lf", &code, &quantity);
    switch (code) {
        case 1:
            amount = quantity * 4.00;
            break;
        case 2:
            amount = quantity * 4.50;
            break;
        case 3:
            amount = quantity * 5.00;
            break;
        case 4:
            amount = quantity * 2.00;
            break;
        case 5:
            amount = quantity * 1.50;
            break;

        default:
            break;
    }

    printf("Total: R$ %0.2lf\n", amount);
    
    return 0;
}
