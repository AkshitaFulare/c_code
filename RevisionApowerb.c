#include<stdio.h>
int power(int base, int exponent)
{
    int index,result=1;
    for(index=1;index<=exponent;index++)
    {
        result=result*base;
    }
    return result;
}
int main()
{
    int base1,exponent1,result1;
    printf("Program to find exponent\n");
    printf("Enter  base value\n");
    scanf("%d",&base1);
    printf("Enter  exponent value\n");
    scanf("%d",&exponent1);
    result1=power(base1,exponent1);
    printf("Result:%d",result1);
}
