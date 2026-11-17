// #Q94 - Find the longest word in a sentence
#include <stdio.h>

int main()
{
    char str[200];
    char word[100];
    int i, j = 0;
    int max = 0, length = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
            length++;
        }
        else
        {
            if(length > max)
            {
                max = length;
                word[j] = '\0';
            }

            j = 0;
            length = 0;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("Longest word = %s", word);
    printf("\nLength = %d", max);

    return 0;
}