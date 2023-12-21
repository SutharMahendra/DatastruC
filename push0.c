// this code use for push at begining in stack
#include<stdio.h>
#include<stdlib.h> //for exit()fuction
#define max 4

int stack_arr[max];
int first=-1;

void push(int data){
    if(first==max-1){
        printf("Stack is overflow");
        return;
    }else{
        first+=1;
        for(int i=first; i>0; i--){
            stack_arr[i]=stack_arr[i-1];
        }
        stack_arr[0]=data;
    }
}

void display(int data){
    if(first==-1){
        printf("Stack is underflow");
    }
    for(int i=0; i < first; i++){
        printf("%d", stack_arr[i]);
        printf("\n");
    }
}

int main(){
    int data;
    int value;
    push(20);
    push(30);
    push(29);

    display(value);

    return 0;

}
