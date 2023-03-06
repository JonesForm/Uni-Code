#include <stdio.h>

int main()
{
    int range, num, rem, sum = 0, j;
    printf("Enter a number find perfect number to: ");
    scanf("%d", &range);

for (int i = 1; i < range; i++)
{
    num = i;
    sum = 0;
    for (j = 1; j < num; j++)
    {
        if (num % j == 0)
        {
            sum += j;
        }
    }
    if (sum == num)
    {
        printf("%d is a perfect number\n", num);
    }
}
        
    return 0;
}