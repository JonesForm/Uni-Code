#include <stdio.h>

int main()
{
    int number;
    int orginal;
    int binary[1024];
    int count = 0; // initialize count to 0
    printf("Enter a number to be converted to binary: ");
    scanf("%d", &number);

    orginal = number;

    while (number > 0)
    {
        binary[count] = number % 2;
        number = number / 2;
        count++;
    }
    
    printf("The binary number for %d is: ", orginal); // print the original input number

    for (int j = count - 1; j >= 0; j--)
    {
       printf("%d", binary[j]);
    }
    printf("\n"); // add a newline character at the end of the output
    
    return 0;
}