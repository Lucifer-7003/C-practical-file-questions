// WAP to enter number of units consumed by a customer, and calculate the electricity bill accordingly as per the following conditions:
// 	1. 5Rs for 	0 to 200 units
// 	2. 7Rs for 	201 to 500 units
// 	3. 9Rs for	501 to 1000 units
// 	4. 12Rs for	1000+ units

#include <stdio.h>

int main()
{
    int units, amt;
    printf("Enter Bill units: ");
    scanf("%d", &units);

    if (units <= 200)
    {
        amt += units * 5;
    }
    else if (units <= 500)
    {
        amt += 200 * 5;
        amt += (units - 200) * 7;
    }
    else if (units <= 1000)
    {
        amt += 200 * 5;
        amt += 300 * 7;
        amt += (units - 500) * 9;
    }
    else
    {
        amt += 200 * 5;
        amt += 300 * 7;
        amt += 500 * 9;
        amt += (units - 1000) * 12;
    }
    printf("total bill = Rs %d\n", amt);
    return 0;
}