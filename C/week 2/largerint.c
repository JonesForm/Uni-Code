#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf ("We need Three numbers this time, first one: ");
    scanf ("%d", &num1);

    printf ("Now for the second number: ");
    scanf ("%d", &num2);

    printf ("And finally the third: ");
    scanf ("%d", &num3);

    printf ("Now lets find the largest number of the 3. \n\n");

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf ("%d is the largest", num1);
        }
        else
        {
            printf ("%d is the largest", num3);
        }
        
    }
    else if (num2 > num3)
    {
        printf ("%d is the largest", num2);
    }
    else
    {
        printf ("%d is the largest", num3);
    }
    return 0;
    
}