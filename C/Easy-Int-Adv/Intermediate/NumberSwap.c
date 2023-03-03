#include <stdio.h>

int main()
{
    int number1, number2, swap;
    printf("Enter two numbers for us to swap around: ");
    scanf("%d%d", &number1, &number2);

    swap = number1;
    number1 = number2;
    number2 = swap;

    printf("Now the numbers are: %d and %d", number1, number2);
    return 0;
}