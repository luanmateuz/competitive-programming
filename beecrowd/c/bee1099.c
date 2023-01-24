#include <stdio.h>

int main() {
    int n, x, y, sum;
    n = x = y = 0;

    scanf("%d", &n);

    for (int i = 0;i < n; i++) {
        sum = 0;

        scanf("%d", &x);
        scanf("%d", &y);

        if (y < x) {
          int temp = x;
          x = y;
          y = temp;
        }

        for (x += 1;x < y; x++) 
          if (x % 2 != 0) sum += x;
        
        printf("%d\n", sum);
    }
    
    return 0;
}
