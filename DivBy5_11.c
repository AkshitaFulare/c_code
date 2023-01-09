#include<stdio.h>
int main()
{
    int num;
    printf("\nTo cheak whether the number given is divisible by 5 and 11 ");
    printf("\n Enter a number ");
    scanf("%d",&num);
    if(num%5==0)
    {
        if(num%11==0)
        {
            printf("\n The number is divisible by both 5 and 11 ");
        }
        else
        {
            printf("\n The number is only divisible by 5 ");
        }
    }
    else
    {
        printf("\n The number is not divisible by both 5 and 11 ");
    }
    return 0;
}