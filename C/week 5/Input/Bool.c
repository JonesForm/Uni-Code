#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool input;
    printf("Please enter a boolean (0 = False | 1 = True): ");
    scanf("%d", &input);

    if (input == false)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    
    return 0;

}