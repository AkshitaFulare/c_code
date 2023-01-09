#include<stdio.h>
int main()
{
    int phy_mrk,che_mrk,bio_mrk,maths_mrk,cs_mrk;
    printf("\n Program to calculate the the Grade ");
    printf("\n Enter the marks out of 100 ");
    printf("\n Enter the marks of physics ");
    scanf("%d",&phy_mrk);
    printf("\n Enter the marks of chemistry ");
    scanf("%d",&che_mrk);
    printf("\n Enter the marks of biology ");
    scanf("%d",&bio_mrk);
    printf("\n Enter the marks of mathamatics ");
    scanf("%d",&maths_mrk);
    printf("\n Enter the marks of cs ");
    scanf("%d",&cs_mrk);
    int total;
    total=phy_mrk+che_mrk+bio_mrk+maths_mrk+cs_mrk;
    float percent;
    percent=( total / 5 ) ;
    printf("\n%f",percent);
    if(percent >= 90)
    {
        printf("\n You got GRADE A ");
    }
    else if(percent >= 80)
    {
        printf("\n You got GRADE B ");
    }
    else if(percent >= 70)
    {
        printf("\n You got GRADE C");
    }
    else if(percent >= 60)
    {
        printf("\n You got GRADE D ");
    }
    else if(percent >= 40)
    {
        printf("\n You got GRADE E ");
    }
    else
    {
        printf("\n You got GRADE F ");
    }
    return 0;
}

