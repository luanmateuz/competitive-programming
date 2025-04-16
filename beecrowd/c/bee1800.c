#include <stdio.h>

int main() {
    int Q, E, temp;
    scanf("%d %d", &Q, &E);

    int last_2_d[1001] = {0};
    for (int i = 0; i < E; i++) {
        scanf("%d", &temp);
        last_2_d[temp] = temp;
    }
    for (int i = 0; i < Q; i++) {
        scanf("%d", &temp);
        if (last_2_d[temp] != 0) {
            printf("0\n");
        } else {
            printf("1\n");
            last_2_d[temp] = temp;
        }
    }

    return 0;
}
