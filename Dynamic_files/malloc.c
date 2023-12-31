#include <stdio.h>
#include <stdlib.h>
// for malloc use only

int main()
{

    int n, i;
    printf("enter number:");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        /* code */
        printf("invalid memory allocation");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("enter number[%d]:", i + 1);
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++)
    {
        printf("number [%d]:%d \n", i + 1, *(ptr + i));
    }
    return 0;
}