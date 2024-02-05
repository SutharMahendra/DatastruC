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
    if (head == NULL)
    {
        printf("Doubly linked list is emty");
    }
    else if (head->next == NULL)
    {
        free(head);
    }
    else
    {
        struct node *temp;
        struct node *temp2;
        temp = head;
        temp2 = head;

        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }

        free(temp);
        temp2->next = NULL;
        return temp2;
    }
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
