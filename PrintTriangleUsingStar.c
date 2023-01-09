#include<stdio.h>
int main()
{
    int row,i,j;
    printf("\n Enter Number of rows  ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i+2;j<=i;j++)
        {
            if(j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    }
    return 0;
}
