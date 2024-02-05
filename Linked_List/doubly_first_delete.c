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

struct node *first_delete(struct node *head)
{
    struct node *temp;
    temp = head;

    head = head->next;
    free(temp);
    head->pre = NULL;

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

    head = first_delete(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
