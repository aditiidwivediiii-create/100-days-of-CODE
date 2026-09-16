// Q67: Write a program to insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, position, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element: ");
    scanf("%d %d", &position, &element);

    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    printf("Array after insertion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}