#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *link;
};

struct node *endinsert(struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 34;
    ptr->link = NULL;

    struct node *temp;
    temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = ptr;

    return temp;
}

int main()
{

    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 32;
    head->link = NULL;

    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 33;
    ptr->link = NULL;

    head->link = ptr;

    endinsert(head);

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}