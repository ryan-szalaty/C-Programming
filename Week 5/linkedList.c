#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

int main(void) {
    node *list = NULL;

    node *n = malloc(sizeof(node));

    if (n != NULL) {
        n->number = 1; //(*n).number also works
        n->next = NULL;
    }

    list = n;
}