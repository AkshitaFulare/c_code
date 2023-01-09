// Program to calculate the  nth term of A.P 3,7,11......
#include<stdio.h>
int main()
{
    int nth,a,n,d;
    a=3;//firt term
    d=4;// difference
    printf(" Given series 3,7,11,.....");
    printf("\n First term %d ",a);
    printf("\n Common  Difference %d ",d);
    printf("\nEnter the value of n ");
    scanf("%d",&n);
    nth = a + n*d - 1*d;
    printf("\n The nth term of the series is %d ",nth);
    return 0;
}