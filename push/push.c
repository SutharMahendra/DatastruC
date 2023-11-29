#include<stdio.h>
#include<stdlib.h>
#define max 4 

void push(int data){
    int top,stack_arr[max];
    if(top==max-1){
        printf("Stack is overflow");
        return;  
    }
   top=top+1;
   stack_arr[top]=data;
}

int main(){
    int stack_arr[max];
    int top= -1;
    push(13);
    push(34);
    push(35);
    push(48);

    return 0;    

}
