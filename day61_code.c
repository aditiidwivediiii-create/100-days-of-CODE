// #Q111 - First negative integer in each window
#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, found;

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

    printf("First negative elements: ");

    for(i = 0; i <= n - k; i++)
    {
        found = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}