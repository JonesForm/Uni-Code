#include <stdio.h>

int main()
{
    int number, remainder, reverse, i;
    printf("Enter a number to be reverse: ");
    scanf("%d", &number);

    for (int i = number; number != 0 ; number = number / 10)
    {
        remainder = number % 10;
        reverse = reverse + remainder;
    }
    
    printf("%d is reversed", reverse);
    return 0;
}