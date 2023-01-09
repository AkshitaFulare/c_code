
#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm;
    printf("\n Program to print patterns using numbers \n Please enter odd numbers only ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=1;colm<=rows;colm++)
        {
            printf("%d",rows);
        }
        printf("\n");
    }
    return 0;
}


