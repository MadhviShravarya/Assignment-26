/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}
