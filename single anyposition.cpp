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

void insert_position()
{
    int pos, i, value;

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &value);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    temp = head;

    for(i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
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

    insert_position();

    printf("\nLinked List After Insertion:\n");
    display();

    return 0;
}
