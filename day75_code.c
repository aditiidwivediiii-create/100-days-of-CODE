// #Q125 - Append text to a file
#include <stdio.h>

int main()
{
    FILE *fp;
    char str[200];

    fp = fopen("info.txt", "a");

    if(fp == NULL)
    {
        printf("File could not be opened");
        return 0;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("Text appended successfully");

    return 0;
}