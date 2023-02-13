#include <stdio.h>

int main()
{
    int num1, num2, op;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter which operation you want to perform: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    scanf("%d", &op);

    switch (op)
    {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case 5:
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            break;
    }
    return 0;
}