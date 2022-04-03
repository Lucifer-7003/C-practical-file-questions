/*
WAP to perform the following operation:
54321
4321
321
21
1
*/

#include <stdio.h>

int main()
{
    int i, j, temp, n = 5;
    for (i = n; i >= 0; --i)
    {
        temp = i;
        for (j = 1; j <= i; ++j)
        {
            printf("%d", temp--);
        }
        printf("\n");
    }
    return 0;
}