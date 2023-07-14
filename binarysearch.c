#include <stdio.h>

int binarysearch(int arr[], int left, int right, int target)
{

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {10, 20, 30, 45, 50, 60, 77, 99, 88};

    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 77;

    int result = binarysearch(arr, 0, n - 1, key);

    if (result == -1)
    {
        printf("key not found");
    }
    else
    {
        printf("Element found in %d position", result);
    }

    return 0;
}