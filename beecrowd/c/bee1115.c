#include <stdio.h>

int main() {

	int x, y;

	scanf("%d", &x);
	scanf("%d", &y);

	for (;;) {
		if (x > 0 && y > 0) {
			printf("primeiro\n");
		}
		if (x < 0 && y > 0) {
			printf("segundo\n");
		}
		if (x < 0 && y < 0) {
			printf("terceiro\n");
		}
		if (x > 0 && y < 0) {
			printf("quarto\n");
		}
  
		scanf("%d %d", &x, &y);
  
		if (x == 0 || y == 0) return 0;
	}

}
