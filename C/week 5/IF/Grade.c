#include <stdio.h>

int main()
{
    int score;
    printf("Enter the score [0-100]: \n");
    scanf("%d", &score);

    if (score > 69)
    {
        printf("Your grade is a A");
    }
    else if (score > 59 && score < 70)
    {
        printf("Your grade is a B");
    }
    else if (score > 49 && score < 60)
    {
        printf("Your grade is a C");
    }
    else if (score > 39 && score < 50)
    {
        printf("Your grade is a D");
    }
    else
    {
        printf("Your grade is a F");
    }
    return 0;
    
}