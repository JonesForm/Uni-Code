#include <stdio.h>

int main()
{
    int n, p, prod = 1;
    printf ("Enter a number: ");
    scanf ("%d", &n);

    printf ("To what power: ");
    scanf ("%d", &p);

    for (int i = 1; i <= p; i++)
    {
        prod *= n;
    }
    printf ("%d to the power of %d is %d", n, p , prod);
    return 0;

}