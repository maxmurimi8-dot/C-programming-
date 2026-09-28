#include <stdio.h>

// Function definition
float calculateBill(float units)
{
    float bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main()
{
    float units, bill;

    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    bill = calculateBill(units);

    printf("Units consumed: %.2f\n", units);
    printf("Total electricity bill: KSh %.2f\n", bill);

    return 0;
}