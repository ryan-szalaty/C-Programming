#include <stdio.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

void free_tree(node *root);
void print_tree(node *root);
int binary_search(node *root, int number);

int main(void)
{
    node *tree = NULL;

    node *n = malloc(sizeof(node));

    if (n == NULL)
    {
        return 1;
    }

    n->number = 2;
    n->left = NULL;
    n->right = NULL;

    tree = n;
}

void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free_tree(root);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i ", root->number);
    print_tree(root->right);
}

int binary_search(node *root, int number)
{
    if (root == NULL)
    {
        printf("%s", "Number not found.");
        return 1;
    }
    else if (root->number == number)
    {
        printf("Number found!");
        return 0;
    }
    number > root->number ? binary_search(root->right, number) : binary_search(root->left, number);
}