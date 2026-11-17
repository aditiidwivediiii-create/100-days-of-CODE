// #Q101 - Find first and last occurrence of target
#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, first = -1, last = -1;
    int low, high, mid;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("First occurrence index = %d\n", first);
    printf("Last occurrence index = %d", last);

    return 0;
}