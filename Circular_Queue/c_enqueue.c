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

int main(){
    cricular_enqueue();
    cricular_enqueue();
    cricular_enqueue();
    cricular_enqueue();
    cricular_enqueue();
    return 0;
}