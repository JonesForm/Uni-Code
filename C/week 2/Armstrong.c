#include <stdio.h>
#include <math.h>

int main() 
{
    int num, original, remainder, digits = 0, result = 0;
    printf("Enter the number: ");
    scanf("%d",&num);

    original = num;

    while (original != 0)
    {
        original /= 10;
        digits++;
    }

    original = num;
    while (original != 0)
    {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }
    
    if (result == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}