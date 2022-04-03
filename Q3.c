// Write a program in C to print the following series.
// 1,4,9,16,25,36,49,64,81,100 using while loop.

#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d, ", i * i);
        ++i;
    }
    printf("\n");
    return 0;
}