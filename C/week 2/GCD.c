#include <stdio.h>

int main()
{
    int num1, num2, result, i;
    printf ("Lets find the common denominator of 2 numbers, enter the first number:    ");
    scanf ("%d", &num1);
    printf ("Now enter the second number:  ");
    scanf ("%d", &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            result = i;
        }        
    }
    
    printf ("The common denominator of %d and %d is %d", num1, num2, result);

    return 0;
    
}