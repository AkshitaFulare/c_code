#include<stdio.h>
int main()
{
    int reverse=0,num,reminder,n;
    num=10;
    for(int i=0;i<=num;i++)
    {
        n=i;
        reverse=0;
        while(i!=0)
        {
            reminder=i%10;
            reverse=reverse*10+reminder;
            i=i/10;
        }
        //printf("%d",reverse);
        if(n==reverse)
        {
           printf("%d",reverse);
        }

    }
    return 0;
}
