#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm,temp;
    printf("\n Program to print patterns using numbers/n Note Please Only Enter the odd nUmbers  ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    printf("\n Enter the number of coloumn ");
    scanf("%d",&numcolm);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=1;colm<=numcolm;colm++)
        {
            if(rows==colm && colm==(numcolm/2)+1 && rows==(numrow/2)+1)
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

