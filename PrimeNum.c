#include<stdio.h>
int main()
{
    int num,i=2,count=0;
    printf("\n Program to find that given number is prime or not ");
    printf("\n Enter the  number ");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
        i++;
    }
    if(count==0)
    {
        printf("\n %d is a prime number ",num);
    }
    else
    {
        printf("\n %d is not a prime number ",num);
    }
    return 0;
}
