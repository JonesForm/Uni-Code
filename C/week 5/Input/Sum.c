#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter two numbers to be added together: ");
    scanf("%d %d", &number1, &number2);

    printf("The numbers %d and %d added together make %d\n", number1, number2, number1 + number2);
    return 0;
}