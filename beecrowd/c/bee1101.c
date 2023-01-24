#include <stdio.h>

int main() {

  int m, n, sum = 0;

  for (;;) {
    scanf("%d %d", &m, &n);

    if (m <= 0 || n <= 0) break;
    if (m < n) {
      int temp = n;
      n = m;
      m = temp;
    }

    for (;n <= m; n++) {
      printf("%d ", n);
      sum += n;
    }

    printf("Sum=%d\n", sum);

    sum = 0;
  }

  return 0;
}
