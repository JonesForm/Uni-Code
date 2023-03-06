#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, n1, sum;
    printf("Enter the start of a range for prime numbers: ");
    scanf("%d", &n);
    printf("Enter the end of a range for prime numbers: ");
    scanf("%d", &n1);

    printf("The prime numbers between %d and %d are: \n", n, n1);
    for (int i = n; i <= n1; i++)
    {
        if (i <= 1)
        {
            continue;
        }
        
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d\n", i);
            sum += i;
        }
        
    }
    printf("The sum of the list is: %d\n", sum);
    return 0;
}