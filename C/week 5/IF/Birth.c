#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    // IF-ELSE not used as multiple-categorys can be assigned.
    if (age >= 60)
    {
        printf("You are a Senior\n");
    }
    if (age >= 18)
    {
        printf("You are a Adult\n");
    }
    if (age >= 13 && age <= 19)
    {
        printf("You are a Teenager\n");
    }
    if (age >= 0 && age <= 12)
    {
        printf("You are a Child\n");
    }
    if (age < 0)
    {
        printf("You aint even born ?? Really ??\n");
    }
    return 0;
    
    
}