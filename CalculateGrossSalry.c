#include<stdio.h>
int main()
{
    float basic_slry,hra,da,gross_slry;
    printf("\n Enter the basic salary of an employee ");
    scanf("%f",&basic_slry);
    if(basic_slry<=10000)
    {
        da = basic_slry * 0.8;
        hra = basic_slry * 0.2;
    }
    else if(basic_slry<=2000)
    {
        da = basic_slry * 0.9;
        hra = basic_slry * 0.25;
    }
    else
    {
        da = basic_slry * 0.95;
        hra = basic_slry * 0.3;
    }
    gross_slry = basic_slry + hra + da;
    printf("\n Gross salary of a employee  is =%f",gross_slry);
    return 0;
}
