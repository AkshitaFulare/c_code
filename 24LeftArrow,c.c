
#include<stdio.h>
int main()
{
    int  numrows,row,col,space;
    printf("\n\t\t\t\t Pyramid ");
    printf("\n Enter number of rows ");
    scanf("%d",&numrows);
    for(row=1;row<=numrows;row++)
    {

        for(space=((2*row)-1);space<2*numrows;space++)
        {
            printf(" ");
        }

        for(col=numrows;col>=row;col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(row=2;row<=numrows;row++)
    {

        for(space=1;space<=(2*row)-1;space++)
        {
            printf(" ");
        }


        for(col=row;col>0;col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}
