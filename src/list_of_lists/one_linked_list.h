#ifndef LIST
#define LIST

typedef struct Node {
    double value;
    struct Node *next;
} Node;

typedef struct List {
    int len;
    Node *first;
} List;

#endif