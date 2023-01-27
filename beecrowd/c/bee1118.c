#include <stdio.h>

int main() {

  int x, counter = 0;
  float input, avg = 0.0f;

  do {
    while (counter < 2) {
      scanf("%f", &input);

      if (!(input < 0 || input > 10)) {
        avg += input;
        counter++;
      } else {
        printf("nota invalida\n");
      }

    }

    printf("media = %.2f\n", (avg/counter));

    for (;;) {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &x);

      avg = 0;
      counter = 0;

      if (x == 1 || x == 2) break;
    }

  } while (x != 2);

  return 0;
}
