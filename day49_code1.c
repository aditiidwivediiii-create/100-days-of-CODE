// #Q97 - Print initials of a name
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    for(i = 0; name[i] != '\0'; i++)
    {
        if(i == 0 || name[i - 1] == ' ')
        {
            if(name[i] != ' ' && name[i] != '\n')
            {
                printf("%c.", name[i]);
            }
        }
    }

    return 0;
}