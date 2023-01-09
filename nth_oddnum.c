//program to calculate nth odd number 
#include<stdio.h>
int main()
{
    int n,nth;
    printf("\nThe nth term you wanted to know from odd number series = ");
    scanf("%d",&n);
    nth=2*n-1;
    printf("\nThe nth odd number is %d ",nth);
    return 0;
}