// program to calculate nth term of series 
#include<stdio.h>
int main()
{
    int n,term;
    printf("\nEnter the value of n foe the series 5,7,9,11......  ");
    scanf("%d",&n);
    term = 5+(n-1)*2;
    printf("\n Value of nth term is %d ",term );
    return 0;
}