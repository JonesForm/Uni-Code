#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter a number to square all the numbers to that point and add them together.\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("You enter a negative number\n");
    }
    else
    {
        for (int i = 1; i < n + 1; i++)
        {
            printf("%d Squared is %d\n", i, i * i);
            sum += i * i;
        }
        printf("The sum of all the numbers %d\n", sum);
    }
    return 0;
}