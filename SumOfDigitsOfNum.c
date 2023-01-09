#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("\n Program to print the sum of the digits in  a number ");
    printf("\n Enter a number ");
    scanf("%d",&num);
    while(num!=0)
    {
        sum+=num%10;

        num=num/10;
    }
    printf("\n Sum of digits of a number is : %d ",sum);
    return 0;
}
