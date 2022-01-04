#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * rear, *front, *prev, *p;
void create()
{
    front = rear = NULL;
}
void enqueue(int data)
{
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    if (front == NULL)
        front = rear = p;
    else
    {
        rear->next = p;
        rear = p;
    }
    rear->next = front; 
}

int dequeue()
{
    int x;
    if (front == NULL)
    {
        return -1;
    }
    else if (front == rear) 
    {
        x = front->data;
        free (front);
        front = rear = NULL;
    }
    else
    {
        struct node *prev = front;
        x = prev->data;
        front = front->next;
        rear->next = front;
        free (prev);
    }
    return x;
}

int empty()
{
    if (front == NULL)
    {
        return 1;
    }
    else
        return 0;
}

void display()
{
    struct node *prev = front;
    do
    {
        printf("%d ", prev->data);
        prev = prev->next;
    } while (prev != front);
}

int main()
{
    int a, choice;
    while (1)
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter element for insertion in queue  : ");
            scanf("%d", &a);
            enqueue(a);
            break;
        case 2:
            if (empty())
                printf("Queue underflow\n");
            else
                printf("%d is dequeued\n\n", dequeue());

            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}