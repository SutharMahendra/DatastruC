#include<stdio.h>
#include<stdlib.h>
#define max 4
int stack_arr[max];
int top= -1; 

void push(){
    
    if(top==max-1){
        printf("Stack is overflow");
        return;  
    }else{
        int data;
        printf("enter data");
        scanf("%d",&data);

        top=top+1;
        stack_arr[top]=data;
    }
}

int main(){
    
    push();
    push();
    push();
    push();
    push();

    return 0;    

}
