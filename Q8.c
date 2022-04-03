// WAP to print Fibonacci series.

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, i, n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", a, b);
    for (i = 3; i <= n; ++i)
    {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
        c = 0;
    }
    printf("\n");

    return 0;
}