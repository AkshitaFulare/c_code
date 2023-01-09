

#include<stdio.h>
int main()
{
    int row,i,j;
    printf("\n\t\t\t\t\t\ Hollow Inverted Mirrored Right Triangle ");
    printf("\n Enter Number of rows  ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=row;j>=i;j--)
        {
            if(i==1 || j==i || j==row )
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
