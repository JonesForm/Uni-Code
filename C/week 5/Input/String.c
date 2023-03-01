#include <stdio.h>

int main()
{
    char string[256];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    printf("You entered: \n%s\n", string);
    return 0;

}