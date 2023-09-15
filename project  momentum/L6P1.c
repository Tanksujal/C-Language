#include <stdio.h>

main()
{
    int unit;
    float unit_charge, total_amt, sur_charge;

    
    printf("Enter your unit = ");
    scanf("%d", &unit);


    
    if(unit <= 50)
    {
        unit_charge = unit * 0.50;
    }
    else if(unit <= 150)
    {
        unit_charge = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        unit_charge = 100 + ((unit-150) * 1.20);
    }
    else
    {
        unit_charge = 220 + ((unit-250) * 1.50);
    }

   
    sur_charge = unit_charge * 0.20;
    total_amt  = unit_charge + sur_charge;

    printf("Electricity Bill = %f", total_amt);
}