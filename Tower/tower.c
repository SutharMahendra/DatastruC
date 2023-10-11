#include<stdio.h>
#include<stdlib.h>

int hanoi(int n,char source,char destination,char auxilary){
    if(n<=0){
        printf("invalid number");
        return 0;
    }
    else if(n==1){
        printf("move disk %d from %c to %c \n",n,source,destination);
        return n, source, destination;
    }
    else{
        hanoi(n-1,source,auxilary,destination);
        printf("move disk %d from %c to %c \n",n,source, destination);
        hanoi(n-1, auxilary, destination, source);
        return n, source,destination;
    }
}

int main(){

    int n;
    char A,B,C;
    printf("Enter number of disks :");
    scanf("%d", &n);

    hanoi(n,'A','C','B');
    return 0;
}
