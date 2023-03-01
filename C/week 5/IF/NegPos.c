#include <stdio.h>

int main() 
{
    int number;
    printf("Enter a value to be checked if Negative, Positive or Zero: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("Zero\n");
    }
    else if (number > 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }
    return 0;
    
}