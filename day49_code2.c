// #Q98 - Print initials with surname in full
#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ' &&
           name[i + 1] != '\n' && name[i + 1] != '\0')
        {
            last = i + 1;
        }
    }

    printf("Formatted name: ");

    for(i = 0; i < last; i++)
    {
        if(i == 0 || name[i - 1] == ' ')
        {
            if(name[i] != ' ')
                printf("%c. ", name[i]);
        }
    }

    for(i = last; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}