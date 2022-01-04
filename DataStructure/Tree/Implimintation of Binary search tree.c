#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node *search(struct node *root, int a)
{
    if (root == NULL || root->data == a)
    {
        return root;
    }
    else if (a > root->data)
    {
        return search(root->right, a);
    }
    else
    {
        return search(root->left, a);
    }
}

struct node *Minimum_node(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left != NULL)
    {
        return Minimum_node(root->left);
    }
    return root;
}
struct node *Maximum_node(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->right != NULL)
    {
        return Maximum_node(root->right);
    }
    return root;
}
struct node *newnode(int a)
{
    struct node *node;
    node = malloc(sizeof(struct node));
    node->data = a;
    node->left = NULL;
    node->right = NULL;

    return node;
}

struct node *insert(struct node *root, int a)
{
    if (root == NULL)
    {
        return newnode(a);
    }
    else if (a > root->data)
    {
        root->right = insert(root->right, a);
    }
    else
    {
        root->left = insert(root->left, a);
    }
    return root;
}

struct node *delete (struct node *root, int a)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (a > root->data)
    {
        root->right = delete (root->right, a);
    }
    else if (a < root->data)
    {
        root->left = delete (root->left, a);
    }
    else
    {
        //leaf node
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        //One Child node
        else if (root->left == NULL || root->right == NULL)
        {
            struct node *temp;
            if (root->left == NULL)
            {
                temp = root->right;
            }
            else
            {
                temp = root->left;
            }
            free(root);
            return temp;
        }

        //Two Child node
        else
        {
            struct node *temp = Maximum_node(root->left);
            root->data = temp->data;
            root->left = delete (root->left, temp->data);
        }
    }
    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{

    struct node *root;
    printf("\n---------------------------------\n");
    printf("BINARY SEARCH TREE IMPLIMENTATION\n");
    printf("---------------------------------\n");
    root = newnode(30);
    insert(root, 15);
    insert(root, 21);
    insert(root, 35);
    insert(root, 2);
    insert(root, 55);
    insert(root, 42);
    insert(root, 12);
    insert(root, 10);
    insert(root, 8);
    root = delete (root, 1);
    root = delete (root, 40);
    root = delete (root, 45);
    root = delete (root, 9);
    printf("The inorder traversel of tree is:");
    inorder(root);
    search(root, 21);
    struct node *p;
    p = Maximum_node(root);
    printf("\n---------------------------------\n");
    printf("The Maximun Number in the tree is:%d", p->data);
    p = Minimum_node(root);
    printf("\n---------------------------------\n");
    printf("The Minimum Number in the tree is:%d", p->data);
    root = delete (root, 30);
    printf("\n---------------------------------\n");
    printf("The inorder traversel of tree is:");
    inorder(root);
}