#include <stdio.h>

int main() {

    int duration, h, m, s;

    scanf("%d", &duration);
    h = duration / (60*60); // hours
    duration %= (60*60);
    m = duration / 60; // minutes
    duration %= 60;
    s = duration; // seconds
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
