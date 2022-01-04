#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;          //Data part of Node
    struct node *next; //pointerpart of node which holds address of the next node
};
struct node *prev, *head, *p;
struct node *reverse_list(struct node *head)
{
    struct node *curr;
    curr = head;
    p = NULL;
    prev = NULL;
    while(curr != NULL)
    {
        p = curr->next;
        curr->next = prev;
        prev = curr;
        curr = p;
    }
    head = prev;
    return head;
}
void creat_list()
{
    int n, i;
    printf("number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = (int *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
            prev = p;
    }
}
void print(struct node *head)
{
    struct node *temp = head;
    printf("HEAD=> ");
    while(temp != NULL)
    {
        printf("%d=> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    head = NULL;
    creat_list();
    printf("\nGiven linked list\n");
    print(head);
    head = reverse_list(head);
    printf("\nReversed linked list\n");
    print(head);
    return 0;
}