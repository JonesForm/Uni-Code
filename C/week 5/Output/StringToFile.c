#include <stdio.h>

int main()
{
    char string[] = "This is a test string";
    char retrieved[256];

char *filename = "dummy.txt";

FILE *fp = fopen(filename, "w");
if (fp == NULL)
{
    printf("Error open the file '%s'\n", filename);
    return -1;
}

fputs(string, fp);
fclose(fp);

fopen(filename, "r");
fgets(retrieved, 256, fp);
printf("The string from the file is: %s\n", retrieved);
return 0;


}