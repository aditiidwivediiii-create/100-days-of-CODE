// #Q124 - Copy contents from source to destination file
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;
    char file1[50], file2[50];

    printf("Enter source filename: ");
    scanf("%49s", file1);

    printf("Enter destination filename: ");
    scanf("%49s", file2);

    source = fopen(file1, "r");

    if(source == NULL)
    {
        printf("Source file not found");
        return 0;
    }

    destination = fopen(file2, "w");

    if(destination == NULL)
    {
        printf("Destination file could not be created");
        fclose(source);
        return 0;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully");

    return 0;
}