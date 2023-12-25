#include<stdio.h>
#define max 4
int front = -1;
int rear = -1;
int c_queue_arr[max];

void cricular_enqueue(){
    int data;
    printf("enter data");
    scanf("%d", &data);

    if ((rear + 1) % max == front){
        printf("circular queue is overflow");
        return;
    }
    if(front != 0 && rear == max - 1){
        rear = 0;
    }
    else if (rear == -1 && front == -1){
        rear = 0;
        front = 0;
    }else{
       rear = (rear + 1) % max ;
       c_queue_arr[rear] = data;
    }
}

void circular_dequeue(){
    int value;
    if (front == -1){
        printf("circular queue is underflow");
        return;
    }
    value = c_queue_arr[front];
    if (front == -1 && rear == -1){
        front = 0;
        rear = 0;
    }else if(front = max -1){
        front = 0;
    }else{
        front = front + 1;
    }

}

void display(){
    if (front == -1 || rear == front){
        printf("circular queue is underflow");
        return;
    }else{
        for(int i = front; i <= rear; i++){
            printf("%d", c_queue_arr[i]);
        }
    }
}

int main(){
    cricular_enqueue();
    cricular_enqueue();
    cricular_enqueue();
    cricular_enqueue();
    circular_dequeue();
    display();
    return 0;
}