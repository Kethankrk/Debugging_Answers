#include <stdio.h>

int stack[10];
int top = -1;

void push(int data)
{
    if (top == 10)
    {
        printf("Stack Overflow!!!\n");
        return;
    }
    stack[++top] = data;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!!!\n");
        return -1;
    }

    return stack[top--];
}

void print()
{
    if (top == -1)
    {
        printf("The stack is empty!\n");
        return;
    }
    printf("\n---------Printing the stack---------\n");
    for (int i = top; i >= 0; i--)
    {
        printf("| %d |\n", stack[i]);
    }
    printf("\n");
}

int main()
{
    int option, data;
    int x = 1;
    while (x)
    {
        printf("\nPlease select an option:\n1) Push\n2) Pop\n3) Print Stack\n4) Exit\nEnter the option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter the element to be pushed : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("\nThe popped element is %d\n", data);
            break;
        case 3:
            print();
            break;
        case 4:
            x = 0;
            break;
        default:
            printf("\nWrong input!!!\n");
        }
    }
}
