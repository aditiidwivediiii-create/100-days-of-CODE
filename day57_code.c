// #Q107 - Find previous greater element
#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, j, found;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");

    for(i = 0; i < n; i++)
    {
        found = 0;

        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("-1");
        }

        if(i < n - 1)
            printf(", ");
    }

    return 0;
}