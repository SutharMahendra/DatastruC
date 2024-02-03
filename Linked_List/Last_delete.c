#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *link;
};

// int insertvalue(){
//     int data;
//     printf("enter data");
//     scanf("%d",data);
//     return data;
// }

struct node *createnode(int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->link = NULL;

    return new;
}

struct node *enddelete(struct node *head)
{
    if (head == NULL)
    {
        printf("linked list is emty");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {

        struct node *temp;
        struct node *temp2;
        temp = head;
        temp2 = head->link;

        while (temp2->link != NULL)
        {
            /* code */
            temp = temp2;
            temp2 = temp2->link;
        }
        temp->link = NULL;
        free(temp2);
    }
    return head;
}

int main()
{
    struct node *head;
    head = createnode(32);

    struct node *ptr1;
    ptr1 = createnode(45);

    head->link = ptr1;

    struct node *ptr2;
    ptr2 = createnode(46);

    ptr1->link = ptr2;

    head = enddelete(head);
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
