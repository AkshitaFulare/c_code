#include<stdio.h>
int main()
{
    int num,prod=1,rem;
    printf("\n Program to print the product of the digits in  a number ");
    printf("\n Enter a number ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;

        prod=prod*rem;

        num=num/10;
    }
    printf("\n Product of digits of a number is : %d ",prod);
    return 0;
}

