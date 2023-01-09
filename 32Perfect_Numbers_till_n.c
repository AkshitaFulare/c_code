#include<stdio.h>
int main()
{
    int n, num, factor;
    printf("This is program to print all perfect numbers between 1 to n... \nEnter the value of n : \n");
    scanf("%d",&n);
    for(num=1;num<=n;num++)
    {
        int sum=0;
        for(factor=1;factor<num;factor++)
        {
            if(num%factor==0)
            {
                sum=sum+factor;
            }
        }
        if(sum==num)
        {
            printf("\n%d",num);
        }
    }
}
