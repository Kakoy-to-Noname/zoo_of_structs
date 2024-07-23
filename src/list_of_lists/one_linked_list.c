#include "one_linked_list.h"

void push(Node* list, double val){
    Node tmp = {val, list->next};
    list->next = &tmp;
}