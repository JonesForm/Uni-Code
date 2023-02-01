#include <stdio.h>

int main() 
{
    int whole;
    float decimal;
    double big;
    char character;
    // using %lu to display data back in bytes
    printf ("Size of int: %lu bytes \n", sizeof(whole));
    printf ("Size of float: %lu bytes \n", sizeof(decimal));
    printf ("Size of double: %lu bytes \n", sizeof(big));
    printf ("Size of char: %lu bytes \n", sizeof(character));
    return 0;
}