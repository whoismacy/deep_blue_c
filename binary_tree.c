#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

typedef struct treenode
{
    int value;
    struct treenode *right;
    struct treenode *left;
}node;

node* createnode(int value)
{
    node *result = malloc(sizeof(node));
    if(result != NULL)
    {
        result->right = NULL;
        result->left = NULL;
        result->value = value;
    }

    return result;

}

int main()
{
    node *node1 = createnode(2);
    node *node2 = createnode(5);
    node *node3 = createnode(7);

    node1->left = node2;
    node1->right = node3;

    free(node1);
    free(node2);
    free(node3);

    return 0;

}
