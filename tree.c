#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node
{
    int number_value;
    struct node *right;
    struct node *left;
}node;

node* add_value(node *n, int number)
{
    node *pointer = malloc(sizeof(node));

    if (n->number_value >= number)
    {
        n->right = pointer;
        pointer->number_value = number;
    }

    else if (n->number_value < number)
    {
        n->left = pointer;
        pointer->number_value = number;
    }

    return pointer;
}

int main()
{
    node *genesis_node;
    genesis_node->number_value = 800;
    return 0;
}
