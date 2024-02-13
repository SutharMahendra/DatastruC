#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    int data;
    printf("enter data[-1 for NULL node] : \n");
    scanf("%d", &data);

    if (data == -1)
    {
        return NULL;
    }
    else
    {
        printf("this data for left child of %d\n", data);
        newnode->left = createnode();

        printf("this data for right child of %d\n", data);
        newnode->right = createnode();
    }
    return newnode;
}

int main()
{
    struct node *root;
    root = NULL;
    root = createnode();

    return 0;
}
