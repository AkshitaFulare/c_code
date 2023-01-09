// program to take number of days and convert into years months & weeks
#include<stdio.h>
int main()
{
    int days,years,weeks,months;
    printf("Enter days ");
    scanf("%d",&days);
    
    years=days/365;
    weeks=days/7;
    months=days/30;
    printf("\n Days to year %d ",years);
    printf("\n Days to weaks %d ",weeks);
    printf("\n Days to months %d ",months);

    return 0;
}