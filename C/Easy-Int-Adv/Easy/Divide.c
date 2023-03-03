#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter two numbers to divide and get the remainder: ");
    scanf("%d%d", &number1, &number2);

    printf("%d divided by %d = %d with the remainder of %d\n", 
        number1, number2, number1 / number2, number1 % number2);

    return 0;
}