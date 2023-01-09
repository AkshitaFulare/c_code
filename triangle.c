//program to calculate the third angle of triangle when  other 2 is given
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    angle1=60;
    angle2=90;
    angle3= 180-(angle1+angle2);
    printf("Anlge 1 ",angle1);
    printf("\nAnlge 2 ",angle2);
    printf("\nThird angle of triangle is %d ",angle3);
    return 0;
}