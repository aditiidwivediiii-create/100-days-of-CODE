// #Q121 - Create file and write name and age
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created");
        return 0;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data successfully saved to file");

    return 0;
}