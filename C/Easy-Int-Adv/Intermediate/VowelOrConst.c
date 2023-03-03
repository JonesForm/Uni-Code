#include <stdio.h>

int main()
{
    char character;
    printf("enter a character to see if a vowel or a consonant: ");
    scanf("%c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') 
    {
        printf("The letter %c is a Vowel.", character);
    }
    else
    {
        printf("The letter %c is a consonant", character);
    }
    return 0;

}