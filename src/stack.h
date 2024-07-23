#ifndef STACK_H
#define STACK_H

#define MAX_STACK_SIZE 100

typedef struct {
    char *items[MAX_STACK_SIZE];
    int top;
} Stack;

void initStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, const char *item);
char *pop(Stack *s);
char *peek(Stack *s);

#endif