#include<stdio.h>
int main()
{
    int num, i, j, factor;
    printf("This is a program to print all the prime factors of a given number... \nEnter a number : \n");
    scanf("%d",&num);
    printf("All the prime factors of %d are : \n",num);
    for(i=2;i<num;i++)
    {
        int counter=0;
        if(num%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    counter++;
                }
            }
            if(counter==0)
            {
                printf("\n%d",j);
            }
        }
    }
}
