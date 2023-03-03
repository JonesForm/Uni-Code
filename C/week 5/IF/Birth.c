#include <stdio.h>
#include <time.h>

int main()
{
    int birth, age;
    time_t t;
    time(&t);
    struct tm* current_time = localtime(&t);

    printf("Please enter your birth year: ");
    scanf("%d", &birth);
    age = (current_time->tm_year + 1900) - birth;
    // IF-ELSE not used as multiple-categorys can be assigned.
    printf("You are: %d Years old\n", age);
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