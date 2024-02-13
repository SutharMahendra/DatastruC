#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode()
{
    int data;
    printf("enter data[-1 for null node] :\n");
    scanf("%d", &data);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;

    if (data == -1)
    {
        return 0;
    }
    else
    {

        printf("This data for left child of %d\n", data);
        newnode->left = createnode();

        printf("This data for right child of %d\n", data);
        newnode->right = createnode();
    }
    return newnode;
}

// this is code for inorder representation
// 1) left child 2) root 3)right child

void Inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        Inorder(root->left);
        printf("%d\n", root->data);
        Inorder(root->right);
    }
}

int main()
{
    struct node *root;
    root = NULL;
    root = createnode();

    printf("Inorder Representation\n");
    Inorder(root);
    return 0;
}