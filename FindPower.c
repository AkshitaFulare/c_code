#include<stdio.h>
int main()
{
    int i,exponent,base_num,power=1;
    printf("\n To find the power of any number ");
    printf("\n Enter the  number ");
    scanf("%d",&base_num);
    printf("\nEnter exponent ");
    scanf("%d",&exponent);
    i=1;
    while(i<=exponent)
    {
        power*=base_num;
        i++;
    }
    printf("\n %d ^ %d = %d",base_num,exponent,power);
    return 0;
}
