#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX_STACK_SIZE - 1;
}

void push(Stack *s, const char *item) {
    if (isFull(s)) {
        fprintf(stderr, "Stack overflow\n");
        exit(1);
    }
    s->top++;
    s->items[s->top] = strdup(item);
    if (s->items[s->top] == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
}

char* pop(Stack *s) {
    if (isEmpty(s)) {
        fprintf(stderr, "Stack underflow\n");
        exit(1);
    }
    char *item = s->items[s->top];
    s->top--;
    return item;
}

char *peek(Stack *s) {
    if (isEmpty(s)) {
        return NULL;
    }
    return s->items[s->top];
}