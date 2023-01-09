#include<stdio.h>
int main()
{
    int reverse=0,num=10,rem,n;
    for(int i=0;i<=num;i++)
    {
        n=i;
        reverse=0;
        while(n!=0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n=n/10;
        }
        //printf("%d",reverse);
        if(i==reverse)
        {
            printf("%d",i);
            printf("\n");
        }
            
    }   
    return 0;
}
