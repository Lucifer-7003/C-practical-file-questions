// WAP to print numbers between 51 to 100, also you print the numbers multiple of 5 between 51 and 100.

#include <stdio.h>

int main()
{
    int i;
    printf("Number between 51 to 100\n");

    for (i = 51; i <= 100; ++i)
    {
        if (i % 10 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%d\t", i);
        }
    }

    printf("Multiple of 5\n");
    for (i = 51; i <= 100; ++i)
    {
        if (i % 5 == 0)
        {
            printf("Multiple of 5 = %d\n", i);
        }
    }
    return 0;
}
