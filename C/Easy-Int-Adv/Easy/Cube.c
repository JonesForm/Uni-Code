#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number to be cubed: \n");
    scanf("%d", &number);

    printf("The cubed number is: %d\n", number * number * number);
    return 0;
}