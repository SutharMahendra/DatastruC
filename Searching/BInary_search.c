#include <stdio.h>

int binary(int arr[], int size, int element)
{
    int low = 0, high = size, mid;

    while (low <= high)
    {
        // you can also put mid = left + (right - left)/2 when value is very large//
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 10, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 20;
    int index = binary(arr, size, element);
    printf("%d, %d ", element, index);
    return 0;
}