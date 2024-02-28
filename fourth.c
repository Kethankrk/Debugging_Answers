#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *create_node(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

node *insert_at_start(node *head, int data)
{
    node *newNode = create_node(data);
    newNode->next = head;
    head = newNode;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d - ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int count, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &count);
    node *head = NULL;
    for (int i = 0; i < count; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &data);
        if (head == NULL)
        {
            head = create_node(data);
        }
        else
        {
            head = insert_at_start(head, data);
        }
    }

    print(head);

    return 0;
}
