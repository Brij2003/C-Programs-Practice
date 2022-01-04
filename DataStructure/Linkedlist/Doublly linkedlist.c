#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *prev, *p;
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
int main()
{
    int i, n;
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    head = NULL;
    for (i = 0; i < n; i++)
    {
        p = (int *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;
        p->prev = NULL;
        if(head == NULL)
            head = p;
        else
            prev->next = p;
            p->prev = prev;
            prev = p;
    }
    print_List();
    // free (p);
    // return 0;
}