#include<stdio.h>
int main()
{
    int num,num1;
    int rem,rem1;
    int sum,prod;
    int num2,i,count;
    num=100;
    for(int j=0;j<=num;j++)
    {
        sum=0;
        num1=j;
        num2=j;
        count=0;
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
        if(sum==j)
        {
             printf("%d",sum);
             printf("\n");
        }
        
    }
    
 return 0;
}