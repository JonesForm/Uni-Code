#include <stdio.h>
#include <ctype.h>
/*ctype so we can use the isalpha command other wise we could use aci nmbers to check if within range.
65-90 and 97-122 */

int main()
{
    char character;
    printf ("Enter a character to be checked if it is a Alphabet: ");
    scanf ("%c", &character);

    if (isalpha(character) != 0 )
    {
        printf ("%c is a Alphabet", character);
    }
    else
    {
        printf ("%c is no a Alphabet", character);
    }
    return 0;
    
}