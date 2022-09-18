#include <stdio.h>

int main() {

    const int SIZE = 3;

    double arr[SIZE][SIZE], result = 0;
    int line;
    char type;

    scanf("%d %c", &line, &type);
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%lf", &arr[i][j]);
            
            if (i == line) {
                result += arr[i][j];
            }
        }
    }

    printf("%.1lf\n", (type == 'S' ? result : (result/SIZE)));

    return 0;
}