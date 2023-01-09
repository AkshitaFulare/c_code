#include<stdio.h>
int main()
{
    int num,num1;
    int rem,rem1;
    int sum=0,prod;
    int num2,i,count=0;
    num=100;
    int j=0;
    while(j<num)
    {
        num1=j;
        num2=j;
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
        //printf("Sum of all digits of %d is = %d ",num,sum);
        if(sum==num)
        printf("%d",sum);
        j++;
    }

 return 0;
}
