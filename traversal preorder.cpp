#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

void preorder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    struct node *root;

    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Preorder Traversal:\n");
    preorder(root);

    return 0;
}
