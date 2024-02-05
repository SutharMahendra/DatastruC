#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *pre;
    struct node *next;
};

struct node *createnode(int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->pre = NULL;
    new->next = NULL;
}

struct node *first_insert(struct node *head)
{
    struct node *ptr;
    ptr = createnode(46);
    ptr->next = head;
    head->pre = ptr;
    head = ptr;

    return head;
}

int main()
{
    struct node *head;
    head = createnode(32);

    struct node *ptr;
    ptr = createnode(45);

    head->next = ptr;
    ptr->pre = head;

    head = first_insert(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
