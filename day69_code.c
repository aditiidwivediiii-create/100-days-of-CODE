// #Q119 - Find repeated element in one iteration
#include <stdio.h>

int main()
{
    int arr[100];
    int count[1000] = {0};
    int n, i, repeated = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count[arr[i]]++;

        if(count[arr[i]] == 2)
        {
            repeated = arr[i];
            break;
        }
    }

    printf("Repeated element = %d", repeated);

    return 0;
}