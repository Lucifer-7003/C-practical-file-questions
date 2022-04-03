// WAP to calculate area of circle.

#include <stdio.h>

int main()
{
    float pi = 3.14159265359, area;
    int radius;
    printf("Enter Radius of circle: ");
    scanf("%d", &radius);
    area = pi * (radius * radius);
    printf("Area of circle = %f\n", area);

    return 0;
}