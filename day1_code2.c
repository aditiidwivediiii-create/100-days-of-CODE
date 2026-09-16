// Q2: Write a program to input two numbers and display their sum,
// difference, product, and quotient.
// Division by zero should be handled carefully.

#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0)
    {
        quotient = (float)num1 / num2;
        printf("Quotient = %.2f", quotient);
    }
    else
    {
        printf("Quotient cannot be calculated because division by zero is not allowed.");
    }

    return 0;
}