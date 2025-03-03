#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //              0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    int values[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n = 0;
    char inp[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", inp);
        int result = 0;
        for (int j = 0; j < strlen(inp); j++) {
            result += values[(inp[j]-48)];
        }
        printf("%d leds\n", result);
    }

    return 0;
}
