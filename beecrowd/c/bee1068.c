#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10000

struct node {
    char data;
    struct node *next;
};

struct stack {
    int size;
    struct node *top;
};

void stack_init(struct stack *s) {
    s->top = NULL;
    s->size = 0;
}

void stack_destroy(struct stack *s) {
    while (s->top != NULL) {
        struct node *temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
}

int stack_size(struct stack *s) { return s->size; }

int stack_is_empty(struct stack *s) { return s->size == 0; }

int stack_top(struct stack *s) { return s->top ? s->top->data : '\0'; }

void stack_push(struct stack *s, char data) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = s->top;
    s->top = temp;
    s->size++;
}

void stack_pop(struct stack *s) {
    if (stack_is_empty(s)) return;

    struct node *temp = s->top;
    s->top = s->top->next;
    s->size--;
    free(temp);
}

int are_pairs(char top, char c) {
    return ((top == '(' && c == ')') || (top == '{' && c == '}') ||
            (top == '[' && c == ']'))
               ? 1
               : 0;
}

int is_valid(char c) {
    return (c == '(' || c == ')' || c == '{' || c == '}' || c == '[' ||
            c == ']')
               ? 1
               : 0;
}

int balanced_p(char *exp) {
    struct stack stk;
    stack_init(&stk);

    for (int i = 0; i < strlen(exp); i++) {
        char c = exp[i];
        if (!is_valid(c)) {
            continue;
        }

        if (c == '(' || c == '[' || c == '{') {
            stack_push(&stk, c);
        } else if (stack_is_empty(&stk) || !are_pairs(stack_top(&stk), c)) {
            return 0;
        } else {
            stack_pop(&stk);
        }
    }
    int r = stack_is_empty(&stk);
    stack_destroy(&stk);
    return r;
}

int main() {
    char input[MAX_SIZE];
    for (; scanf("%s", input) != EOF;) {
        printf("%s\n", (balanced_p(input) ? "correct" : "incorrect"));
    }

    return 0;
}
