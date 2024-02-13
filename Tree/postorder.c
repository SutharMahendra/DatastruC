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

//  logic for postorder representation
// 1) left child  2)  right child 3)root

void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n", root->data);
    }
}

int main()
{
    struct node *root;
    root = NULL;
    root = createnode();

    printf("Inorder Representation\n");
    postorder(root);
    return 0;
}