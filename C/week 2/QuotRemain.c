#include <stdio.h>

int main() 
{
    int number, divider, divided, remainder;
    printf ("Please enter what number you would like to be divided: ");
    scanf ("%d", &number);
    printf ("What number would you like to divide it by? ");
    scanf ("%d", &divider);

    divided = number / divider;
    remainder = number % divider;

    printf ("%d can be divided by %d: %d times\n", number, divider, divided);
    printf ("There will be a remainder of: %d", remainder);
    return 0;
}