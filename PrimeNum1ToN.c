#include<stdio.h>
int main()
{
    int num_start,num_end,i,j,count=0;
    printf("\n Program to find the prime numbers between the range given by user ");
    printf("\n Enter the starting range ");
    scanf("%d",&num_start);
    printf("\n Enter the  end range ");
    scanf("%d",&num_end);
    i=num_start;
    while(i<=num_end)
    {
        j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
            j++;
        }
        if(count==0 && i!=1)
        {
            printf("%d ",i);
        }
        count = 0;
        i++;
    }
    return 0;
}
