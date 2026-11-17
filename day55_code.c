// #Q105 - Find majority element
#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, count = 0, candidate;
    int frequency = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    candidate = arr[0];

    for(i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = arr[i];
        }

        if(arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] == candidate)
        {
            frequency++;
        }
    }

    if(frequency > n / 2)
    {
        printf("Majority element = %d", candidate);
    }
    else
    {
        printf("Majority element = -1");
    }

    return 0;
}