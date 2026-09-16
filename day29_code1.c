// Q58: Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int arr[5], i, maximum, minimum;

    printf("Enter 5 elements: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    maximum = arr[0];
    minimum = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > maximum)
            maximum = arr[i];

        if (arr[i] < minimum)
            minimum = arr[i];
    }

    printf("Maximum element = %d\n", maximum);
    printf("Minimum element = %d", minimum);

    return 0;
}