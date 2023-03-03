#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter two numbers to see which is larger\n");
    scanf("%d%d", &number1, &number2);

    if (number1 > number2)
    {
        printf("%d is larger than %d", number1, number2);
    }
    else
    {
        printf("%d is larger than %d", number2, number1);
    }
    return 0;
}