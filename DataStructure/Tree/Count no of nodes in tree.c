#include <stdio.h>
#include <stdlib.h>
int size = 0;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int Leaf_count(struct node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
        return Leaf_count(root->left) + Leaf_count(root->right);
}

struct node *temp(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    size++;
    return (node);
}
int Non_Leaf_count(struct node *root)
{
    return size - Leaf_count(root);
}

int main()
{
    struct node *root = temp(51);
    root->left = temp(26);
    root->right = temp(37);
    root->left->left = temp(49);
    root->left->right = temp(51);
    root->left->right->left = temp(21);
    root->left->right->right = temp(7);

    printf("\nLeaf count of the tree is %d\n", Leaf_count(root));
    printf("Non leaf count of the tree is %d\n", Non_Leaf_count(root));
}
