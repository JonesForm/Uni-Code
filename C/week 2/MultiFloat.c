#include <stdio.h>

int main()
{
    float number1, number2, sum;
    printf ("Lets multiply two floats together enter the first number: ");
    scanf ("%f", &number1);

    printf ("Now enter the second float: ");
    scanf ("%f", &number2);

    sum = number1 * number2;

    printf ("Your two numbers %.2f and %.2f = %.2f", number1, number2, sum);
    return 0;
}