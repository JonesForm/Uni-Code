#include <stdio.h>

int main() 
{
    int number1, number2, sum;
    printf ("Lets add two numbers together use a space to then enter the next number: ");
    scanf ("%d %d", &number1, &number2);

    sum = number1 + number2;

    printf ("Your two numbers %d and %d = %d", number1, number2, sum);
    return 0;

}