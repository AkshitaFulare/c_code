
#include<stdio.h>
int main()
{
    int row,i,j;
    printf("\n\t\t\t\t\t Hollow Right Triangle ");
    printf("\n Enter Number of rows  ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i || i==row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
