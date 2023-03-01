#include <stdio.h>

int main()
{
    char *filename = "dummyInt.txt";
    int collected;

    FILE *fp = fopen(filename, "r");
    
    fscanf(fp, "%d", &collected);

    printf("%d", collected);

    fclose(fp);

    return 0;
}