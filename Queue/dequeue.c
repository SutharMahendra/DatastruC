#include<stdio.h>
#define max 4 
int queue_arr[max];
int front = -1;
int rear = -1;

void enqueue(){
    int data;
        printf("enter data ");
        scanf("%d", &data);
    if(rear == max - 1){
        printf("queue is overflow");
        return;
    }
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    }else{
        
        rear = rear + 1;
        
    }
    queue_arr[rear] = data;
    printf("done");
}

void dequeue(){
    int value ;
    if (front == -1 || front == rear){
        printf("queue is underflow");
        return;
    }else{
       value = queue_arr[front];
       if(front == rear){
        front = -1;
        rear = -1;
       }else{
        front = front + 1;
       }
    }
}

void display(){
    if (front == -1 || front == rear){
        printf("queue is underflow");
        return;
    }else{
        for(int i = front; i<=rear; i++){
            printf("%d", queue_arr[i]);
        }
    }
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();

    return 0;
}