#include<stdio.h>
int main()
{
    int num;
    int rem;
    int sum=0;
    int n;
    int i=1;
    int j;
    printf("\n Program to print the number is armstrong number  ");
    printf("\n Enter the number ");
    scanf("%d",&num);
    n=num;
    printf("\n armstrong number from 1 to %d = ",n);
    while(i<=num);
    {
       while(j<i)
       {
            rem=j%10;
            sum+=rem*rem*rem;
            j=j/10;
       }

    //printf("Sum of all digits of %d is = %d ",n,sum);
        if(sum==i)
        {
            count++;
        }
        i++;
   }
   /* else
    {
        printf("\n%d is  not an Armstrong number  ",n);
    }*/
    return 0;

}

