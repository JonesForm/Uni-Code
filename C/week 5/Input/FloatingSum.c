#include <stdio.h>

int main()
{
    float number1, number2;
    printf("Enter two floating point numbers (decimals): ");
    scanf("%f %f", &number1, &number2);

    printf("Adding %f and %f together make %f", number1, number2, number1 + number2);
    return 0;
}