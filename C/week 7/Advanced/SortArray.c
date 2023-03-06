#include <stdio.h>

int main()
{
    int amount, temp;
    printf("Enter the amount of numbers to be in an array: ");
    scanf("%d", &amount);
    int arr[amount];
    for (int i = 0; i < amount; i++)
    {
        printf("Enter a number to be added to the array: ");
        scanf("%d", &arr[i]);
    }
    printf("The array now contains: ");
    for (int i = 0; i < amount; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThis array sorted in ascending order: ");
    for (int i = 0; i < amount - 1; i++)
    {
        for (int j = 0; j < amount - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < amount; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}




