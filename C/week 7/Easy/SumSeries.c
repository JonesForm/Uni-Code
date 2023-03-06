#include <stdio.h>

int main()
{
    int n; s
    float sum = 1;
    printf("Enter the number for the series to go to: ");
    scanf("%d", &n);

    printf("1 + ");

    for (int i = 2; i < n + 1; i++)
    {
        printf("1/%d + ", i);
        sum += 1 / (float)i;
    }
    printf(" = %f\n", sum);
    return 0;
    
}