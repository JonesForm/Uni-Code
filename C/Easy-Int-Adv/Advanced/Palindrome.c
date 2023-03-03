#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[1024];
    char new_string[1024];
    int length;
    int j = 0;

    printf("Enter a string to check if it is a palindrome: \n");
    fgets(string, sizeof(string), stdin);

    length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (isalpha(string[i]))
        {
            new_string[j++] = tolower(string[i]);
        }
        
    }

    new_string[j] = '\0';

    length = strlen(new_string);

    for (int i = 0; i < length / 2; i++)
    {
        if (new_string[i]!= new_string[length - i - 1])
        {
            printf("The string is not a palindrome\n");
            return 0;
        }
    }

    printf("The string is a palindrome\n");
    return 0;
    
}