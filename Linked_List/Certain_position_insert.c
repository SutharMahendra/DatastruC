#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    int data;
    struct node* link;
};

struct node* createnode(int data){
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->link = NULL;

    return new;
}

struct node* certain_position_insert(struct node* head){
    struct node* ptr;
    ptr = createnode(47);
    int n;
    printf("enter Nth position [0 to 3] :");
    scanf("%d", &n);

    if(n==0){
        ptr->link=head;
        head = ptr;
        
    }else{
        struct node* temp;
        struct node* temp2;
             temp = head;
            temp2 = head;
        int i=0;
        while (i != n && temp != NULL)
        {
            /* code */
            temp2 = temp;
            temp = temp->link;
            i++;
        }

        if(i == n){
            temp2->link = ptr;
            ptr->link = temp;  
        }else {
            printf("invalid number\n");
        }
        
        
    } 
    return head; 

}

int main(){
   struct node* head;
   head = createnode(32);

   struct node* ptr1;
   ptr1 = createnode(45);

   head->link=ptr1;

   struct node* ptr2;
   ptr2 = createnode(49);
   
   ptr1->link=ptr2;
   
   
   head=certain_position_insert(head);
   
   struct node* ptr;
   ptr = head;

    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0; 
   
}