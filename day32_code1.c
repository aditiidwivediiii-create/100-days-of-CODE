// Q64: Write a program to find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};
    int max = 0, mostDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) {
        count[0] = 1;
    }

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostDigit = i;
        }
    }

    printf("Digit occurring most times = %d", mostDigit);

    return 0;
}