#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int Arr[MAX], Priority[MAX];
int rear = -1;
int front = -1;
int size = 0;
void enqueue(int num, int p)
{
    int i;
    if ((front == 0) && (rear == MAX - 1)) 
        printf("Queue overflow\n");
    else
    {
        if (rear == -1) 
        {
            rear = rear = 0;
            Arr[rear] = num;
            Priority[rear] = p;
        }
        else if (rear == MAX - 1)
        {
            for (i = rear; i <= rear; i++)
            {
                Arr[i - rear] = Arr[i];
                Priority[i - front] = Priority[i];
                rear = rear - front;
                front = 0;
                for (i = rear; i > front; i--)
                {
                    if (p > Priority[i])
                    {
                        Arr[i + 1] = Arr[i];
                        Priority[i + 1] = Priority[i];
                    }
                    else
                        break;
                    Arr[i + 1] = num;
                    Priority[i + 1] = p;
                    rear++;
                    size++;
                }
            }
        }
        else
        {
            for (i = rear; i >= front; i--)
            {
                if (p > Priority[i])
                {
                    Arr[i + 1] = Arr[i];
                    Priority[i + 1] = Priority[i];
                }
                else
                    break;
            }
            Arr[i + 1] = num;
            Priority[i + 1] = p;
            rear++;
        }
    }
}
void display() 
{
    int i;
    for (i = front + 1; i <= rear; i++)
    {
        printf("\nElement = %d\tPriority = %d", Arr[i], Priority[i]);
    }
}
int dequeue() 
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted Element = %d\t Its Priority = %d", Arr[front], Priority[front]);
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
    size--;
}
int main()
{
    int choice, n, i, num, p;
    while(1)
    {
        printf("\n-------------------------------------------------\n");
        printf("IMPLEMENTATION OF PRIORITY QUEUE USING ARRAY\n");
        printf("-------------------------------------------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. size\n");
        printf("5. Exit\n");
        printf("-------------------------------------------------\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the number of num:");
            scanf("%d", &n);
            printf("\nEnter your num and Priority of num\n");
            i = 0;
            while (i < n)
            {
                scanf("%d %d", &num, &p);
                enqueue(num, p);
                i++;
            }
            break;
        case 2:
            dequeue();

            break;
        case 3:
            display();

            break;
        case 4:
            printf("Queue size is => %d\n", size);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nIncorrect Choice\n");
            break;
        }
    }
}