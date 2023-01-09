#include<stdio.h>
int main()
{
    int reverse=0,num,reminder;
    printf("\n Enter the number ");
    scanf("%d",&num);
    int n=num;
    while(num!=0)
    {
        reminder=num%10;
        reverse=reverse*10+reminder;
        num=num/10;
    }
    if(n==reverse)
    {
        printf("\n THe number is palindrome ");
    }
    else
    {
        printf("\n The number is not an palindrome ");
    }
    return 0;
}
