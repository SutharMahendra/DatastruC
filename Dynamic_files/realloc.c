#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr = (int *)malloc(2 * sizeof(int));

    if (ptr == NULL)
    {
        printf("invalid memory allocation");
        return 0;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("enter number[%d]:", i + 1);
        scanf("%d", ptr + i);
    }

    // now this for realloc
    // we allocate 2 more integer memory

    int *ptr1 = (int *)realloc(ptr, 4 * sizeof(int));

    if (ptr == NULL)
    {
        printf("invalid memory allocation");
        return 0;
    }

    for (int i = 2; i < 4; i++)
    {
        printf("enter number[%d]:", i + 1);
        scanf("%d", ptr + i);
    }
    // output lines
    for (int i = 0; i < 2; i++)
    {
        /* code */
        printf("number [%d]: %d", i + 1, *(ptr + i));
    }
    for (int i = 2; i < 4; i++)
    {
        /* code */
        printf("number [%d]: %d", i + 1, *(ptr + i));
    }

    return 0;
}