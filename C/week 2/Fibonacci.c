#include <stdio.h>

int main()
{
    int n;
    printf ("Enter how many terms would you like: ");
    scanf ("%d", &n);
    
    int pos1 = 0, pos2 = 1;
    printf ("Fibonacci Sequence %d, %d, ", pos1, pos2);
    int next = pos1 + pos2;


    for (int i = 3; i <= n; i++)
    {
       printf ("%d, ", next);
       pos1 = pos2;
       pos2 = next;
       next = pos1 + pos2;
    }

    return 0;
    

}