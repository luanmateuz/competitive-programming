#include <stdio.h>
#include <string.h>
 
int main() {

    char a[22], b[22], c[22];
    scanf("%s %s %s", a, b, c);
 
    if (0 == strcmp(a, "vertebrado")) {
        if (0 == strcmp(b, "ave")) {
            if(0 == strcmp(c, "onivoro")) {
                printf("pomba");
            } else {
                printf("aguia");
            }
        } else {
            if (0 == strcmp(c,"onivoro")) {
                printf("homem");
            } else {
                printf("vaca");
            }
        }
    } else {
        if (0 == strcmp(b,"inseto")) {
            if (0 == strcmp(c,"hematofago")) {
                printf("pulga");
            } else {
                printf("lagarta");
            }
        } else {
            if (0 == strcmp(c,"hematofago")) {
                printf("sanguessuga");
            } else {
                printf("minhoca");
            }
        }
    }

    printf("\n");
 
    return 0;
}