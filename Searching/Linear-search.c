#include <stdio.h>

int linearsearch(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 4, 5, 2342, 34, 5, 6, 5, 74, 6, 6, 4, 333, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 34;
    int index = linearsearch(arr, size, element);
    printf("%d, %d ", element, index);
    return 0;
}