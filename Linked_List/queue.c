#include <stdio.h>
#include <stdlib.h>

struct node
{
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

int insert_data()
{
    int data;
    printf("enter data");
    scanf("%d", &data);
    return data;
}

struct node *enqueue(struct node *head)
{
    struct node *ptr;
    ptr = createnode(insert_data());

    struct node *rear;
    rear = head;
    while (rear->link != NULL)
    {
        /* code */
        rear = rear->link;
    }
    rear->link = ptr;
    return head;
}

struct node *dequeue(struct node *head)
{
    if (head == NULL)
    {
        printf("queue is underflow");
        return NULL;
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
        return NULL;
    }
    else
    {
        struct node *front;
        front = head;
        head = head->link;
        free(front);
        front = NULL;
        return head;
    }
}

int main()
{
    struct node *head;
    head = createnode(insert_data());

    struct node *ptr;
    ptr = createnode(insert_data());

    head->link = ptr;

    head = enqueue(head);
    head = dequeue(head);

    ptr = head;
    while (ptr != NULL)
    {
        /* code */
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}