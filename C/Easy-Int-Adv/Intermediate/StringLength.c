#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    int length;
    printf("Enter a string to find the length of the string: ");
    fgets(string, 1000, stdin);

    length = strlen(string);

    printf("The length of the string is %d", length - 1);
    return 0;
}