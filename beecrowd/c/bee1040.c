#include <stdio.h>

int main() {

    double n1, n2, n3, n4, score, average;

    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    score = n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1;
    average = score / 10;
    printf("Media: %0.1lf\n", average);
    
    if (average >= 7) {
        printf("Aluno aprovado.\n");
    } else if (average < 5) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &score);
        printf("Nota do exame: %0.1lf\n", score);
        average = (average + score) / 2;
        if (average >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1lf\n", average);
    }

    return 0;
}
