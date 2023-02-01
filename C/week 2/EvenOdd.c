#include <stdio.h>

int main() 
{
    int num;
    printf ("Enetr a number to see if its Odd or Even: ");
    scanf ("%d", &num);
    if (num % 2 == 0)
    {
        printf ("The number is Even");
    }
    else 
    {
        printf ("The number is Odd");
    }
    return 0;
    
}