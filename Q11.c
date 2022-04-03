// WAP to enter number of units consumed by a customer, and calculate the electricity bill accordingly as per the following conditions:
// 	1. 5Rs for 	0 to 200 units
// 	2. 7Rs for 	201 to 500 units
// 	3. 9Rs for	501 to 1000 units
// 	4. 12Rs for	1000+ units

#include <stdio.h>

int main()
{
    int units;
    printf("Enter Bill units: ");
    scanf("%d", &units);

    if (units <= 200)
    {
        printf("total bill = Rs 5\n");
    }
    else if (units <= 500)
    {
        printf("total bill = Rs 7\n");
    }
    else if (units <= 1000)
    {
        printf("total bill = Rs 9\n");
    }
    else
    {
        printf("total bill = Rs 12\n");
    }
    return 0;
}