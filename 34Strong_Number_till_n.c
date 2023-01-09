#include<stdio.h>
int main()
{
    int n, num, num1, i, digit;
    printf("This is  a program to print all the strong number till n... \nEnter the value of n : \n");
    scanf("%d",&n);
    for(num=1;num<=n;num++)
    {
        num1=num;
        int sum=0;
        while(num1>0)
        {
            digit=num1%10;
            num1=num1/10;
            int factorial=1;
            for(i=1;i<=digit;i++)
            {
                factorial=factorial*i;
            }
            sum=sum+factorial;
        }
        if(sum==num)
        {
            printf("\n%d",num);
        }
    }
}
