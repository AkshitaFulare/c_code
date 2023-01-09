//program to calculate nth even number 
#include<stdio.h>
int main()
{
    int n,nth;
    printf("\nThe nth term you wanted to know from even  number series = ");
    scanf("%d",&n);
    nth=2*n;
    printf("\nThe nth even number is %d ",nth);
    return 0;
}