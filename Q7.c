// WAP to swap two numbers without using 3rd variable.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 number: ");
    scanf("%d %d", &a, &b);
    printf("Number befor swap a=%d, b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Number after swap a=%d, b=%d\n", a, b);

    return 0;
}