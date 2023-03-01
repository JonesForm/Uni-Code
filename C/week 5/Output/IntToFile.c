#include <stdio.h>

int main()
{
    int number = 7;
    int retrieve;
    char *filename = "dummy.txt";

    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s\n", filename);
        return -1;
    }

    fprintf(fp, "%d", number);
    fclose (fp);

    fp = fopen(filename, "r");
    fscanf(fp, "%d", &retrieve);
    printf("Reading the integer from file is: %d\n", retrieve);
    fclose(fp);
    return 0;
}