// WAP to calculate factorial of number, input should be taken from user.

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long int factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    printf("Factorial of %d = %ld\n", n, factorial);
    return 0;
}