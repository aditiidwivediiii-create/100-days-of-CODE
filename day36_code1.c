// Q72: Write a program to find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int matrix[10][10], rows, columns, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}