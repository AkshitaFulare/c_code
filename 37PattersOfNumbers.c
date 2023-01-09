
#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm,temp;
    printf("\n Program to print patterns using numbers \n Please enter odd numbers only ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=1;colm<=numrow;colm++)
        {
            if(rows+colm==numrow+1 || colm==rows)
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
    return 0;
}

