#include <stdio.h>

int main() 
{
    int num1, num2, swapper;
    printf ("Enter a number: ");
    scanf ("%d", &num1);

    printf ("Enter a second number: ");
    scanf ("%d", &num2);

    printf ("So currently %d is num1 and %d is num2, lets change this\n\n", num1, num2);

    swapper = num1;
    num1 = num2;
    num2 = swapper;

    printf ("So now %d is num1 and %d is num2.", num1, num2);
    return 0;
}