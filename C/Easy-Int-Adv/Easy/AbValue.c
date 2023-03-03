#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number to find the absolute value of: ");
    scanf("%d", &number);

    printf("The absolute value of %d is: %d\n", number, abs(number));
    return 0;
}