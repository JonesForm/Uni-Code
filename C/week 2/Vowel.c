#include <stdio.h>

int main() 
{
    char character;
    printf ("Enter a character to be check for a Vowel or Constonant: ");
    scanf ("%c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')  
    {
        printf ("%c is a Vowel. \n", character);
    }
    else
    {
        printf ("%c is a Consonant. \n", character);
    }
    return 0;
    
}