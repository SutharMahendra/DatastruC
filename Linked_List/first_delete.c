#include <stdio.h>
#include <stdlib.h>
// create structure node
struct node
{
    /* data */
    int data;
    struct node *link;
};
// main logic for delete node at beginning of linked list
struct node *begdelete(struct node *head)
{
    if (head == NULL)
    {
        printf("linked list is emty");
        return 0;
    }
    else
    {
        struct node *temp;
        temp = head;
        head = head->link;
        free(temp);
        return head;
    }
}

int main()
{

    // create node
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 32;
    head->link = NULL;

    struct node *ptr1;
    ptr1 = (struct node *)malloc(sizeof(struct node));
    ptr1->data = 45;
    ptr1->link = NULL;

    head->link = ptr1;

    struct node *ptr2;
    ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->data = 46;
    ptr2->link = NULL;

    ptr1->link = ptr2;
    // display linked list after delete node at beginning
    head = begdelete(head);
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        /* code */
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
