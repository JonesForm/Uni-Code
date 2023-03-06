#include <stdio.h>

int main()
{
    int amount;
    printf("How big of an array do you want: ");
    scanf("%d", &amount);
    int array[amount];
    for (int i = 0; i < amount; i++)
    {
        printf("Enter a number to insert into the array: ");
        scanf("%d", &array[i]);
    }
    int small = array[0], large = array[0];
    for (int i = 0; i < amount; i++)
    {
       if (array[i] < small)
       {
           small = array[i];
       }
       if (array[i] > large)
       {
           large = array[i];
       }
    }
    printf("The smallest element is: %d \n", small);
    printf("The largest element is: %d", large);
    return 0;
    
}