//program to calculate sum of first n even numbers 
#include<stdio.h>
int main()
{
    int n,sum;
    n=4;
    printf("\nGiven value of n is %d ",n);
    sum=n*(n+1);
    printf("\nThe sum of first %d even numbers is %d ",n,sum);
    return 0;
}
