#include <stdio.h>
#include <string.h>

void swap(char* x, char* y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* a, int l, int n)
{
    int i;
    if (l == n)
    {
        printf("%s\n", a);
    }
    else
    {
        for (i = 0; i <= n; i++)
        {
            swap((a + l), (a + i));
            permute(a, l + 1, n);
            swap((a + i), (a + l));
        }
    }
}

int main()
{
    char str[100];
    printf("Enter the string for all permutations: ");
    scanf("%s", str);
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}
