#include <stdio.h>

int main() {

  int counter = 0;
  float input, avg = 0.0f;

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

  return 0;
}
