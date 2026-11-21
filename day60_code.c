// #Q110 - Maximum element in each subarray
#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size K: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid window size");
        return 0;
    }

    printf("Maximum elements: ");

    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for(j = i + 1; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}