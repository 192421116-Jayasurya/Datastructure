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

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

struct node* insert(struct node *root, int data)
{
    if(root == NULL)
        return createNode(data);

    if(data < root->data)
        root->left = insert(root->left, data);
    else if(data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root = NULL;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node values:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("Inorder Traversal of BST:\n");
    inorder(root);

    return 0;
}
