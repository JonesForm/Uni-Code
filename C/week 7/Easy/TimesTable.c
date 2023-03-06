#include <stdio.h>

int main()
{
    int number1, number2, i;
    printf("Enter a number you want the times table for: ");
    scanf("%d", &number1);
    printf("Enter a number for the size of the table: ");
    scanf("%d", &number2);

    for (i = 0; i < number2; i++)
    {
        printf("%d\t x\t %d\t =\t %d \n", number1, i + 1, number1 * (i + 1));
    }
    return 0;
}