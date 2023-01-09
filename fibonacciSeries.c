#include<stdio.h>
int main()
{
    int term1,term2,n,i=1,sum=0;
    printf("\n Program to print fibonacci series ");
    printf("\n Enter the  first term for the series  ");
    scanf("%d",&term1);
    printf("\n Enter the total number for the series ");
    scanf("%d",&n);
    printf("\n");
    term2=term1;
    printf("%d,%d,",term1,term2);
    while(i<=n)
    {
        sum=term1+term2;
        printf("%d,",sum);
        term1=term2;
        term2 = sum;
        i++;
    }
    return 0;
}
