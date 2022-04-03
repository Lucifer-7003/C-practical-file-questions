// WAP to check whether a number is even or odd

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number to check: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d is even\n", n) : printf("%d is odd\n", n);
    return 0;
}