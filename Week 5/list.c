#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int check_node(int number, node **list)
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        perror("Could not allocate memory for another node.");
        return 1;
    }
    new_node->number = number;
    new_node->next = *list;
    *list = new_node;
    return 0;
}

int main(void)
{
    node *list = NULL;

    for (int i = 5; i > 0; i--) {
        check_node(i, &list);
    }

    for (node *temp = list; temp != NULL; temp = temp->next)
    {
        printf("%i ", temp->number);
    }

    while (list != NULL)
    {
        node *temp = list->next;
        free(list);
        list = temp;
    }
    return 0;
}
