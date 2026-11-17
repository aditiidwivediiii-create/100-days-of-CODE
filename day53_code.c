// #Q103 - Find pivot index of an array
#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, total = 0, left = 0, right;
    int pivot = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        right = total - left - arr[i];

        if(left == right)
        {
            pivot = i;
            break;
        }

        left = left + arr[i];
    }

    printf("Pivot index = %d", pivot);

    return 0;
}