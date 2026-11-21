// #Q113 - Find kth smallest element
#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid K");
        return 0;
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Kth smallest element = %d", arr[k - 1]);

    return 0;
}