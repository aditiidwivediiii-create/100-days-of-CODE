// #Q104 - Find pivot integer
#include <stdio.h>

int main()
{
    int n, x;
    long long left, right;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        left = (long long)x * (x + 1) / 2;

        right = (long long)n * (n + 1) / 2
                - (long long)(x - 1) * x / 2;

        if(left == right)
        {
            printf("Pivot integer = %d", x);
            return 0;
        }
    }

    printf("Pivot integer = -1");

    return 0;
}