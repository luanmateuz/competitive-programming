#include <stdio.h>
#include <string.h>

int main() {
    int N = 0;
    scanf("%d", &N);

    int arr[N + 1];

    for (int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
    }

    int arr_attk[N + 1];
    memset(arr_attk, 0, sizeof(arr_attk));

    int pos = 1;

    for (; 1 <= pos && pos <= N;) {
        arr_attk[pos] = 1;
        int dir = arr[pos] % 2 == 0 ? -1 : 1;
        if (arr[pos] > 0) {
            --arr[pos];
        }

        pos += dir;
    }

    long long n = 0, attk = 0;

    for (int i = 1; i <= N; i++) {
        n += arr[i];
        attk += arr_attk[i];
    }

    printf("%lld %lld\n", attk, n);

    return 0;
}
