

#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm;
    printf("\n Program to print patterns using numbers  ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=numrow;colm>rows-1;colm--)
        {
            printf("%d",rows);
        }
        printf("\n");
    }
    return 0;
}



