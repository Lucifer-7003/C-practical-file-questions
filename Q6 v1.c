// WAP to print numbers between 51 to 100, also you print the numbers multiple of 5 between 51 and 100.

#include <stdio.h>

int main()
{
    int i;
    for (i = 51; i <= 100; ++i)
    {
        if (i % 5 == 0)
        {
            printf("multiple of 5: %d\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
