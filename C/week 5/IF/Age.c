#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age > 17)
    {
        printf("You are able to vote");
    }
    else
    {
        printf("You are not able to vote");
    }
    return 0;
    
}