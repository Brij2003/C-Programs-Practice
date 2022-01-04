#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void mirror(struct node * root)
{
    if(root == NULL)
    {
        // printf("\nTree is empty\n");
        return;
    }
    else
    {
        struct node *temp;
        mirror(root->left);
        mirror(root->right);
        temp = root->left;
        root->left = root->right;
        root->right=temp;
    }
}
int preorder(struct node *root)
{
    if(root == NULL)
    {
        // printf("\nTree is empty\n");
        return;
    }
    else
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    printf("The preorder of the Tree is:");
    preorder(root);
    mirror(root);
    printf("\nThe preorder of the mirror tree is:");
    preorder(root);
}