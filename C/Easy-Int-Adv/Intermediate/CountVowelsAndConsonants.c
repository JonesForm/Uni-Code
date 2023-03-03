#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[1024];
    int vowelCount = 0, consonantCount = 0, length;
    printf("Enter a string to be given the amount of Vowels and Cononants: ");
    fgets(string, sizeof(string), stdin);

    length = strlen(string);

    for (int i = 0; i <= length; i++)
    {
        string[i] = tolower(string[i]);

        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            vowelCount += 1;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            consonantCount += 1;
        }  
    }
    printf("There was a total of %d Vowels and %d consonants in the string.\n", vowelCount, consonantCount);
    return 0;
    
}