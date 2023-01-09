#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm;
    printf("\n Program to print patterns using numbers \n Please enter odd numbers only ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    printf("\n Enter the number of coloumn ");
    scanf("%d",&numcolm);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=1;colm<=numcolm;colm++)
        {
            if((rows==1 || rows==numrow) && (colm==1 || colm==numcolm))
            {
                printf("0");
            }
            else if(rows==1 || rows==numrow || colm==1 || colm==numcolm )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}


