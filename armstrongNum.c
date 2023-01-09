#include<stdio.h>
int main()
{
    int num,num1;
    int rem,rem1;
    int sum=0,prod;
    int num2,i,count=0;
    printf("\n Program to print the number is armstrong number  ");
    printf("\n Enter the number ");
    scanf("%d",&num);
    num2=num;
    num1=num;
    while(num2>0)
    {
        rem1=num2%10;
        count++;
        num2=num2/10;
    }
    while(num1>0)
    {
        rem=num1%10;
        prod=1;
        for(i=0;i<count;i++)
        {
            prod=prod*rem;
        }
        sum=sum+prod;
        num1=num1/10;
    }
    printf("Sum of all digits of %d is = %d ",num,sum);
    if(sum==num)
    {
        printf("\n%d  is an  Armstrong number ",sum);
    }
    else
    {
        printf("\n%d is  not an Armstrong number  ",num);
    }

}