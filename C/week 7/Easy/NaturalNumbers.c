#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter the number to stop at for natural numbers: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Is not a natural number \n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf(" %d,", i + 1);
            sum += i+1;
        }
    }
    printf("The sum of all natural numbers is: %d\n", sum);
    return 0;
}