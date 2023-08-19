#include <stdio.h>
#include <stdlib.h>

typedef struct list_node {
    int data;
    struct list_node *next;
} list_node;

typedef struct list {
    list_node *init;
    size_t size;
} list;

void list_initialize(list **list) {
    (*list) = malloc(sizeof(list));
    (*list)->init = NULL;
    (*list)->size = 0;
}

void list_insert(list *list, int data) {
    list_node *new_node = malloc(sizeof(list_node));
    new_node->data = data;
    new_node->next = NULL;

    if (list->size == 0) {
        list->init = new_node;
    } else {
        list_node *temp = list->init;
        for (; temp->next != NULL;) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    list->size++;
}

// calc/find hash
int f_hash(int x, int number) { return x % number; }

void ht_insert(list *list[], int value, int m) {
    int idx = f_hash(value, m);
    list_insert(list[idx], value);
}

void printf_f(int id_l, list *l) {
    printf("%d", id_l);
    list_node *aux;
    for (aux = l->init; aux != NULL; aux = aux->next) {
        printf(" -> %d", aux->data);
    }
    printf(" -> \\\n");
}

int main() {
    int n_cases, s_hash, s_values;
    int inp, i = 0;

    scanf("%d", &n_cases);
    for (;;) {
        scanf("%d %d", &s_hash, &s_values);
        list *l[s_hash];

        for (int i = 0; i < s_hash; i++) {
            list_initialize(&l[i]);
        }
        for (int j = 0; j < s_values; j++) {
            scanf("%d", &inp);
            ht_insert(l, inp, s_hash);
        }
        for (int k = 0; k < s_hash; k++) {
            printf_f(k, l[k]);
        }

        if (i == n_cases-1) {
            break;
        }

        i++;
        printf("\n");
    }

    return 0;
}
