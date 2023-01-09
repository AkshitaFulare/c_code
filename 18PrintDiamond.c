#include<stdio.h>
int main()
{
    int  numrows,row,col,space;
    printf("\n\t\t\t\t Pyramid ");
    printf("\n Enter number of rows ");
    scanf("%d",&numrows);
    for(row=1;row<=numrows;row++)
    {
        for(space=numrows-1;space>=row;space--)
        {
            printf("  ");
        }

        for(col=1;col<=(2*row)-1;col++)
        {
            printf(" *");
        }

        printf("\n");
    }
    for(row=2;row<=numrows;row++)
    {
        for(space=row-1;space>0;space--)
        {
            printf("  ");
        }

        for(col=((2*row)-1);col<2*numrows;col++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;

}
