#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to stop at for natural numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf(" %d,", i + 1);
    }
    return 0;
}