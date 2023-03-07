#include <stdio.h>

int main()
{
    int row, space, i, j, start;
    printf("Enter the number of rows for pyramid height: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++)
    {
        for (space = 1; space <= row - i; space++)
        {
            printf("  ");
        }
        start = 1;
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                start = 1;
            }
            else
            {
                start = start * (i - j + 1) / j;
            }
            printf("%3d ", start);
        }
        printf("\n");
    }
    return 0;
}
