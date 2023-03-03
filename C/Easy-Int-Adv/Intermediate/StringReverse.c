#include <stdio.h>
#include <string.h>

int main()
{
    char string[1024];
    int length;
    printf("Enter a string to be reversed: ");
    fgets(string, 1024, stdin);

    length = strlen(string);

    for (int i = length -1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    return 0;
    
}