#include<stdio.h>
int main()
{
    int rows,colm,numrow,numcolm,temp;
    printf("\n Program to print patterns using numbers ");
    printf("\n Enter the number of rows  ");
    scanf("%d",&numrow);
    printf("\n Enter the number of coloumn ");
    scanf("%d",&numcolm);
    for(rows=1;rows<=numrow;rows++)
    {
        temp=numcolm;
        for(colm=1;colm<=numcolm;colm++)
        {
            if(rows%2!=0)
            {
                printf("%d",colm);
            }
            else
            {
                printf("%d",temp);
                temp--;
            }
        }
        printf("\n");
    }
    return 0;
}
