#include <stdio.h>

int main()
{
    char *filename = "dummyFloat.txt";
    float collected;

    FILE *fp = fopen(filename, "r");

    fscanf(fp, "%f", &collected);
    printf("%f\n", collected);

    return 0;


}