#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm,temp;
    printf("\n Program to print patterns using numbers \n Please enter odd numbers only ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    printf("\n Enter the number of coloumn ");
    scanf("%d",&numcolm);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=1;colm<=numcolm;colm++)
        {
            if(colm==(numcolm/2)+1 || rows==(numrow/2)+1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}

