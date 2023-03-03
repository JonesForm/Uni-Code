#include <stdio.h>

int main()
{
    int n;
    printf ("Enter a number to find all the factorials of the number: ");
    scanf("%d",&n);

    printf("The factorials of %d is: \n",n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}