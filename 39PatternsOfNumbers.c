
#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm,count=1;
    printf("\n Program to print patterns using numbers \n Please enter odd numbers only ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    printf("\n Enter the number of coloumn ");
    scanf("%d",&numcolm);
    for(rows=1;rows<=numrow;rows++)
    {
        for(colm=1;colm<=numcolm;colm++)
        {
            if(count<10)
            {
                printf("  %d ",count);
                count++;
            }
            else
            {
                printf("  %d",count);
                count++;
            }
        }
        printf("\n");
    }
    return 0;
}

