#include <stdio.h>

int main() {
  int inp = 0, inp_i, inp_g, x = 0, e = 0, i = 0, g = 0;

  for (;;) {
    scanf("%d %d", &inp_i, &inp_g);

    if (inp_i > inp_g) i++;
    else if (inp_i == inp_g) e++;
    else g++;

    x++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &inp);

    if (inp == 2) break;
  }

  printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", x, i, g, e);
  if (i > g) printf("Inter venceu mais\n");
  else if (e > i && e > g) printf("Nao houve vencedor\n");
  else printf("Gremio venceu mais\n");
  
  return 0;
}
