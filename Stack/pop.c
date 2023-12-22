// pop in stack
#include<stdio.h>
#include<stdlib.h>
#define max 4

int stack_arr[max];
int top=-1;
int value;

void push(int data){
    if(top==max-1){
        printf("stack is overflow");
        return;
    }else{
        stack_arr[top]=data;
        top = top +1;
    }
}

void pop(int value){
    if(top==-1){
        printf("stack is under flow");
        return;
    }else{
        value=stack_arr[top];
        top =top -1;
    }
}

void display(){
    if(top==-1){
        printf("stack is underflow");
    }else{
        for(int i=top; i>=0; i--){
            printf("%d",stack_arr[i]);
            printf("\n");
        }
    }
}

int main(){
    int data;
    push(3);
    push(4);
    push(6);
    push(8);

    pop(value);
    display();

    return 0;
}