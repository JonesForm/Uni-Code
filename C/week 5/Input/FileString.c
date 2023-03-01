#include <stdio.h>

int main()
{
    char string[256];
    char *filename = "dummyString.txt";

    FILE *fp = fopen(filename, "r");

    fgets(string, sizeof(string), fp);
    printf("%s\n", string);

    return 0;
}