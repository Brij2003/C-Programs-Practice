#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *prev, *p, *next;
void print_List()
{
    struct node *ptr = head;
    printf("\n[head] <=>");
    while (ptr != NULL)
    {
        printf(" %d <=>", ptr->data);
        ptr = ptr->next;
    }
    printf(" [end]\n");
}
int check(int a)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        // printf(" %d <=>", ptr->data);
        if(ptr->data == a)
        {
            return 1;
        }
        ptr = ptr->next;
    }
}

int delete(int a)
{
    int n = check(a);

    if(n != 1)
    {
        printf("***********************\n");
        printf("***********************\n");
        printf("***********************\n");

        printf("Entered Data is not present in linked list");
        printf("***********************\n");
        printf("***********************\n");
        printf("***********************\n");

        return 0;
    }
    else
    {
        printf("***********************\n");
        printf("***********************\n");

        printf("Data founded\n");

        struct node *ptr = head;
        if (ptr->data == a)
        {
            // ptr->next->prev = NULL;
            head = ptr->next;
            free(ptr);
        }
        while(ptr != NULL)
        {
            if (ptr->data == a)
            {
                if(ptr->next == NULL)
                {
                    ptr->prev->next = NULL;
                }
                else
                {
                    ptr->next->prev = ptr->prev;
                    ptr->prev->next = ptr->next;
                    free(ptr);
                }
            }
            ptr = ptr->next;
        }
        printf("***********************\n");
        printf("***********************\n");
        printf("***********************\n");

        printf("Data is being Deleted\n");
        printf("***********************\n");
        printf("***********************\n");

        printf("The new Linked list is\n");
        printf("***********************\n");
        printf("***********************\n");
    }
}
int main()
{
    int i, n, a;
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    head = NULL;
    for (i = 0; i < n; i++)
    {
        p = (int *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;
        p->prev = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
            p->prev = prev;
            prev = p;
    }
    printf("Enter the Data you want to Delete:");
    scanf("%d", &a);

    delete(a);
    print_List();

    free (p);
    return 0;
}
// while (ptr != NULL)
// {
//     // printf(" %d <=>", ptr->data);
//     if (ptr->data == a)
//     {
//         // struct node *temp;
//         ptr->next->prev = ptr->prev;
//         ptr->prev->next = ptr->next;
//         free(ptr);
//     }
//     ptr = ptr->next;
// }
// printf("***********************\n");
// printf("***********************\n");
// printf("***********************\n");

// printf("\nData is being Deleted");
// printf("***********************\n");
// printf("***********************\n");

// printf("The new Linked list is\n");
// printf("***********************\n");
// printf("***********************\n");