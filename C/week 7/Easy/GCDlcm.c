#include <stdio.h>

int main() 
{
    int num1, num2, max, result;

    printf ("Enter two numbers for LCM and GCD: ");
    scanf ("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if ((max % num1 == 0) && ( max % num2 == 0)) 
        {
            printf ("The LCM of %d and %d is %d.\n", num1, num2, max);
            break;
        }
        max++;
    }

        for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            result = i;
        }        
    }
    
    printf ("The common denominator of %d and %d is %d", num1, num2, result);
    return 0;
}