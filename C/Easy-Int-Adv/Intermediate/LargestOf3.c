#include <stdio.h>

int main()
{
    int number1, number2, number3;
    printf("Enter three numners to see which is largest: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    if (number1 > number2)
    {
        if (number1 > number3)
        {
            printf("%d is larger than the rest", number1);
        }
        else
        {
            printf("%d is larger than the rest", number3);
        }
    }
    else
    {
        if (number2 > number3)
        {
            printf("%d is larger than the rest", number2);
        }
        else
        {
            printf("%d is larger than the rest", number3);
        }
        
    }
    return 0;
    

}