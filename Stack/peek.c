#include <stdio.h>
#define max 5
int top = -1;
int stack[max];
int value;

void push(int data)
{
    if (top == max - 1)
    {
        printf("Stack is overflow");
        return;
    }
    else
    {
        top += 1;
        stack[top] = data;
    }
}
void display(int i, int new)
{
    if (top == -1)
    {
        printf("stack is underflow");
        return;
    }
    else
    {
        if ((top - i) <= 0)
        {
            printf("stack is underflow");
        }
        else
        {
            stack[top - i] = new;
            printf("data is %d \n", stack[top - i]);
        }
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack is underflow");
        return;
    }
    else
    {
        top = top - 1;
        value = stack[top + 1];
    }
}

int main()
{
    int data;
    push(22);
    push(12);
    push(24);
    push(32);
    push(22);
    // pop();
    // pop();
    display(2, 10);
    return 0;
}
