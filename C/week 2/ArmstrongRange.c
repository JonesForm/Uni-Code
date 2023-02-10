#include <stdio.h>
#include <math.h>

int main() 
{
    int start, end, original, remainder, digits = 0, result = 0;
    printf("Enter a number to start from: ");
    scanf("%d",&start);
    printf("Enter a number to end with: ");
    scanf("%d",&end);

    for (int i = start; i <= end; i++)
    {
        digits = 0;
        original = i;
        result = 0;

        while (original != 0)
        {
            original /= 10;
            digits++;
        }

        original = i;
        while (original != 0)
        {
            remainder = original % 10;
            result += pow(remainder, digits);
            original /= 10;
        }

        if (result == i)
        {
            printf("%d is an armstrong number \n", i);
        }
        
    }
return 0;
}