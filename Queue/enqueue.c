#include<stdio.h>
#define max 4 
int queue_arr[max];
int front = -1;
int rear = -1;

void enqueue(){
    if(rear == max - 1){
        printf("queue is overflow");
        return;
    }else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    }else{
        int data;
        printf("enter data ");
        scanf("%d", &data);
        rear = rear + 1;
        queue_arr[rear] = data;
    }
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();

    return 0;
}