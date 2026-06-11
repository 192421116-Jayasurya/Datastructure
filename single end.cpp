#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *temp, *newnode;

void create()
{
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void insert_end()
{
    int value;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter element to insert at end: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = NULL;

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

void display()
{
    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    create();

    printf("\nLinked List Before Insertion:\n");
    display();

    insert_end();

    printf("\nLinked List After Insertion:\n");
    display();

    return 0;
}
