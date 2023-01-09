#include<stdio.h>
int main()
{
    int row,i,j;
    printf("\n Enter Number of rows  ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=row;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
