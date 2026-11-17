// #Q95 - Check if one string is a rotation of another
#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, j, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    scanf("%99s", a);

    printf("Enter second string: ");
    scanf("%99s", b);

    while(a[len1] != '\0')
    {
        len1++;
    }

    while(b[len2] != '\0')
    {
        len2++;
    }

    if(len1 == len2)
    {
        for(i = 0; i < len1; i++)
        {
            for(j = 0; j < len2; j++)
            {
                if(a[(i + j) % len1] != b[j])
                {
                    break;
                }
            }

            if(j == len2)
            {
                found = 1;
                break;
            }
        }
    }

    if(found == 1)
        printf("Strings are rotations");
    else
        printf("Strings are not rotations");

    return 0;
}