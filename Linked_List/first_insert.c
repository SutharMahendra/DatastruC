#include <stdio.h>
#include <stdlib.h>
// insertion at beginning
struct node
{
    /* data */
    int data;
    struct node *link;
};
// main logic

struct node *beginsert(struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 23;
    ptr->link = head;

    head = ptr;

    return head;
}

int main()
{
    // make a two node//

    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 32;
    head->link = NULL;

    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 34;
    ptr->link = NULL;

    head->link = ptr;

    // display linked list after insert at begining
    head = beginsert(head);
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}