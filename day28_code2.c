// Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    printf("Enter 5 elements: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}