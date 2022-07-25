// WAP to calculate area of circle.

#include <stdio.h>

int main()
{
    float pi = 3.141592, area, radius;

    printf("Enter Radius of circle: ");
    scanf("%f", &radius);
    area = pi * (radius * radius);
    printf("Area of circle = %f\n", area);

    return 0;
}