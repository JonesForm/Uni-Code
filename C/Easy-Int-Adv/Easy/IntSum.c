#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Please enter two numbers to add together: ");
    scanf("%d %d", &number1, &number2);

    printf("%d + %d = %d\n", number1, number2, number1 + number2);
    return 0;
}