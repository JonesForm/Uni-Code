#include <stdio.h>

int main()
{
    int num, end;
    printf ("What number do you want the times table for ?: ");
    scanf ("%d", &num);
    printf ("How far along would you like to go enter a number: ");
    scanf ("%d", &end);

    for (int i = 1; i <= end; i++)
    {
       printf ("%d * %d\t = %d \n", num, i, num * i);
    }
    return 0;
    

}