// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i - 1;
        denominator = 2 * i;

        sum = sum + numerator / denominator;
    }

    printf("Sum of series = %.2f", sum);

    return 0;
}