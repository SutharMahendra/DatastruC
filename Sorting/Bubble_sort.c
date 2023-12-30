#include <stdio.h>

int bubble(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}

int main()
{
    int arr[] = {23, 45, 2, 34, 6, 76};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble(arr, n);
}