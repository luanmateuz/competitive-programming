#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

struct data {
    int ascii;
    int qtd;
};

// "sliding window" adaptation
int adp_slide_window(struct data *arr, char *input_s, int len) {
    int pos = 0;
    int left = 0;
    int rigth = 1;
    int count = 1;

    for (; left < len;) {
        if (input_s[left] == input_s[rigth]) {
            count++;
        } else {
            arr[pos].ascii = (int)input_s[left];
            arr[pos].qtd = count;
            pos++;
            count = 1;
            left = rigth;
        }

        rigth++;
    }

    return pos;
}

int compv2(const void *p1, const void *p2) {
    struct data *d1 = (struct data *)p1;
    struct data *d2 = (struct data *)p2;

    if (d1->qtd != d2->qtd) {
        return (d1->qtd - d2->qtd);
    }
    return (d2->ascii - d1->ascii);
}

int comp(const void *p1, const void *p2) {
    char *d1 = (char *)p1;
    char *d2 = (char *)p2;

    // sorting string
    return strcmp(d1, d2);
}

int main(int argc, char *argv[]) {
    struct data *arr = (struct data *)malloc(sizeof(struct data) * 96);
    char *input = malloc(sizeof(char) * MAX_SIZE);
    if (scanf("%s", input) == EOF) {
        return 0;
    }
    for (;;) {
        int len = strlen(input);
        qsort(input, len, sizeof(input[0]), comp);
        int pos = adp_slide_window(arr, input, len);
        qsort(arr, pos, sizeof(struct data), compv2);
        for (int i = 0; i < pos; i++) {
            printf("%d %d\n", arr[i].ascii, arr[i].qtd);
        }

        if (scanf("%s", input) == EOF) {
            break;
        }
        printf("\n");
    }
    free(input);
    free(arr);
    return EXIT_SUCCESS;
}
