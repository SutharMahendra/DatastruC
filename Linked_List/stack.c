#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *link;
};

struct node *createnode(int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->link = NULL;

    return new;
}

struct node *push(struct node *head, int data)
{

    struct node *ptr;
    ptr = createnode(data);

    if (head == NULL)
    {
        return ptr;
    }

    struct node *top;
    top = head;
    while (top->link != NULL)
    {
        top = top->link;
    }
    top->link = ptr;

    return head;
}

struct node *pop(struct node *head)
{
    if (head == NULL)
    {
        printf("stack is overflow");
        return NULL;
    }
    else if (head->link == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct node *top;
        struct node *temp;
        top = head;
        temp = head;
        while (temp->link != NULL)
        {
            top = temp;
            temp = temp->link;
        }
        top->link = NULL;
        free(temp);
        temp = NULL;

        return head;
    }
    return head;
}

int insert_data()
{
    int data;
    printf("enter data");
    scanf("%d", &data);
    return data;
}

int main()
{
    struct node *head;
    head = createnode(insert_data());

    struct node *ptr;
    ptr = createnode(insert_data());

    head->link = ptr;

    push(head, insert_data());
    pop(head);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
