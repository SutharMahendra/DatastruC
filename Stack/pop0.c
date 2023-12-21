// this is use for poping at the begining of stack
#include<stdio.h>
#include<stdlib.h>
#define max  4

int stack_arr[max];
int first=-1;
int value;

void push(int data){
    if(first==max-1){
        printf("Stack is overflow");
        return;
    }else{
        first+=1;
        stack_arr[first]=data;
    }
}

int pop(int value){
    if(first==-1){
        printf("Stack is underflow");
        return 0;
    }else{
        value: stack_arr[first];
        for(int i=1; i<first; i++){
            stack_arr[i-1]=stack_arr[i];
        }
        first -= 1 ;
    }
}

void display(int data){
    for(int i=0; i<first; i++){
        printf("%d", stack_arr[i]);
    }
}

int main (){
    int data;
    push(20);
    push(12);
    push(39);
    push(11);

    data=pop(value);

    display(data);
    return 0;
}