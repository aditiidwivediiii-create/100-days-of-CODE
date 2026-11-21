// #Q120 - Convert string to sentence case
#include <stdio.h>

int main()
{
    char str[200];
    int i, first = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if(first == 1 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            first = 0;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}