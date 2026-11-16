// #Q82 - Print each character on a new line
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters are:\n");

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}