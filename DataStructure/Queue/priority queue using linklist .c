#include <stdio.h>
#include <stdlib.h>

struct node
{
    int priority;
    int data;
    struct node *link;
};
struct node *front = NULL;
void enqueue(int item, int priority)
{
    struct node *tmp, *q;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = item;
    tmp->priority = priority;
    if (front == NULL || priority < front->priority)
    {
        tmp->link = front;
        front = tmp;
    }
    else
    {
        q = front;
        while (q->link != NULL && q->link->priority <= priority)
            q = q->link;
        tmp->link = q->link;
        q->link = tmp;
    }
}
void dequeue()
{
    struct node *tmp;
    if (front == NULL)
        printf("Queue Underflow\n");
    else
    {
        tmp = front;
        printf("Deleted data is %d\n", tmp->data);
        front = front->link;
        free(tmp);
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
        printf("Queue Underflow\n");
    else
    {
        printf("Queue is :\n");
        while (ptr != NULL)
        {
            printf("Priority => %d \t Data => %d\n", ptr->priority, ptr->data);
            ptr = ptr->link;
        }
    }
}
int main()
{
    int choice, a, priority;
    while(1)
    {
        printf("\n-------------------------------------------------\n");
        printf("IMPLEMENTATION OF PRIORITY QUEUE USING LINKED LIST\n");
        printf("-------------------------------------------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("-------------------------------------------------\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the data value to be added in the queue : ");
            scanf("%d", &a);
            printf("Enter its priority : ");
            scanf("%d", &priority);
            enqueue(a, priority);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }
}
