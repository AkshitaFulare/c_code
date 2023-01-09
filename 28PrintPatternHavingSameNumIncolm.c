
#include<stdio.h>
int main()
{
    int numrows,numcolm,rows,colm;
    printf("\n Printing some patters using numbers ");
    printf("\n Enter number of rows ");
    scanf("%d",&numrows);
    printf("\n Enter number of colomns ");
    scanf("%d",&numcolm);
    for(rows=1;rows<=numrows;rows++)
    {
        for(colm=1;colm<=numcolm;colm++)
        {
            printf("%d",colm);
        }
        printf("\n");
    }
    return 0;
}
