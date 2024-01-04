#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *link;
};

struct node count_of_node(struct node *head)
{
    int count = 0;
    struct node *ptr = NULL;

    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);
}

int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 34;
    head->link = NULL; // head->link = ee simply first node nu link part dharave se je atyare null se

    head->link = (struct node *)malloc(sizeof(struct node)); // have apde first node na link part ne malloc thi address api didho se
    head->link->data = 55;                                   // have head->link ee second node na data no address dharave se
    head->link->link = NULL;

    count_of_node(head);

    return 0;
}