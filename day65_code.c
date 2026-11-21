// #Q115 - Check whether two strings are anagrams
#include <stdio.h>

int main()
{
    char s[100], t[100];
    int count[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    for(i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for(i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}