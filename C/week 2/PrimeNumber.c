#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("%d is not a prime number", n);
    }

    int i;
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number.\n", n);
            break;
        }
    }

    if (i == n)
    {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}