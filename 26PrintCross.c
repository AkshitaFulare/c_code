#include<stdio.h>
int main()
{
    int rows,colm,numrows;
    printf("\n Enter the length \n(NOTE:input must be an odd number )\n");
    scanf("%d",&numrows);
    for(rows=1;rows<=numrows;rows++)
    {
        for(colm=1;colm<=numrows;colm++)
        {
            if(colm==rows || (colm+rows)==(numrows+1))
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
