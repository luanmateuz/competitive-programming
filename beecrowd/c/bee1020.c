#include <stdio.h>

int main() {

    int time;

    scanf("%d", &time);
    printf("%d ano(s)\n", (time / 365));
    time %= 365;
    printf("%d mes(es)\n", (time / 30));
    time %= 30;
    printf("%d dia(s)\n", time);
    return 0;
}
