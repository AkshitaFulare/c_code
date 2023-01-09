

#include <stdio.h>

int main()
{
    float bill,units,surcharge,totalAmt;
    printf("\n Enter the units consumed ");
    scanf("%f",&units);
    if(units>=0 && units<=50)
    {
        bill=units*0.50;
    }
    else if(units>50 && units<=150)
    {
        bill=50*0.50 + (units-50)*0.75;
    }
    else if(units>150 && units<=250)
    {
        bill=50*0.50 + 100*0.75 + (units-150)*1.20;
    }
    else if(units>250)
    {
        bill=50*0.50 + 100*0.75 + 100*1.20 + (units-250)*1.50;
    }
    else
    {
        printf("\n Please Enter valid unit  ");
    }
    surcharge=bill*0.20;
    totalAmt=bill + surcharge;
    printf("\n ELECTRICITY BILL = Rs.%f ",totalAmt);
    return 0;
}
