#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;//Data part of Node 
    struct node *next;//ppointerpart of node which holds address of the next node
};
struct node *prev, *head, *p;
void printList()
{
    struct node *ptr = head;//Address of a Structure pointer *ptr
    printf("\n[head] =>");
    // start from the beginning
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);//printing data part of linked list
        ptr = ptr->next;            //Pointing the Next node by changing the pointer ptr
    }
    printf(" [null]\n");
}
int main()
{
    int n, i;
    printf("number of elements:");
    scanf("%d", &n);
    head = NULL;
    for (i = 0; i < n; i++)
    {
        p = (int *)malloc(sizeof(struct node));//Alloted a space of 8 bytes of memory space to Node
        scanf("%d", &p->data);//Saving the entries in Data part
        p->next = NULL;       //Giving the pointer NULL value Furthet it will be connected to the data part of next node
        if (head == NULL)
            head = p;
        else
            prev->next = p;   //connecting the NULL pointer to the next node Data part
            prev = p;         //Pointing the Next node by changing the pointer prev
    }
    printList();
    free (p);
    return 0;
}