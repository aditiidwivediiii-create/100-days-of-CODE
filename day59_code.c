// #Q109 - Maximum sum of subarray of size K
#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, sum, max;

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

    max = arr[0];

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(i == 0 || sum > max)
        {
            max = sum;
        }
    }

    printf("Maximum subarray sum = %d", max);

    return 0;
}