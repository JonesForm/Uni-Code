#include <stdio.h>

int main()
{
    int number1;
    printf("Enter a number to be squared: ");
    scanf("%d", &number1);

    printf("Square of %d is: %d\n", number1, number1 * number1);
    return 0;
}