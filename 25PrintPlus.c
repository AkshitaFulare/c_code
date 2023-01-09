#include<stdio.h>
int main()
{
    int rows,colm,numrows;
    printf("\n Enter the length ");
    scanf("%d",&numrows);
    for(rows=1;rows<=numrows;rows++)
    {
        for(colm=1;colm<=numrows;colm++)
        {
            if(rows==numrows/2 || colm==numrows/2 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
