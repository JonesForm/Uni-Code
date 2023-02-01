#include <stdio.h>

int main()
{
    int num;
    printf ("Lets Enter a number to see if its Positive or Negative: ");
    scanf ("%d", &num);

    if (num < 0)
    {
        printf ("The number is negative"); 
    }
    else
    {
        printf ("The number is Positive");
    }
    return 0;
    
}