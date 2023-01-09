

#include<stdio.h>
int main()
{
    int rows,colm,numrow,temp;
    printf("\n Program to print patterns using numbers ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=rows;colm<=numrow;colm++)
        {
            printf("%d",colm);
        }
        for(colm=1;colm<rows;colm++)
        {
            printf("%d",numrow);
        }
        printf("\n");
    }
    return 0;
}
