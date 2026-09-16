// Q66: Write a program to insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, element, i, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    position = n;

    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--) {
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