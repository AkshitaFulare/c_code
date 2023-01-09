#include<stdio.h>
int cheakPrime(int num)
{
    int count=0;
    for(int index=2;index<=num/2;index++)
    {
        if(num%index==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num1;
    printf("\n Program to cheak the number is prime or not ");
    printf("\n Enter a number ");
    scanf("%d",&num1);
    int result=cheakPrime(num1);
    if(result==0)
    {
        printf("\n%d is not a prime number \n",num1);

    }
    else
    {
        printf("\n%d is a prime number \n",num1);
    }
    return 0;
}
