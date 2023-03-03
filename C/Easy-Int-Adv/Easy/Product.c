#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter two numbers to find the product: ");
    scanf("%d%d", &number1, &number2);

    printf("Product of %d and %d is: %d", number1, number2, number1 * number2);
    return 0;

}