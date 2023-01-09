#include<stdio.h>
int main()
{
    int row,i,j;
    printf("\n \t\t\t\t\t Hollow Mirrored Right Triangle ");
    printf("\n Enter Number of rows  ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==row || j==1 || j==i)
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
