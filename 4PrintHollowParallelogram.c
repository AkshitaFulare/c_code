#include<stdio.h>
int main()
{
    int side,row,colm;
    printf("\n Program to Print Hollow parallelogram  ");
    printf("\n Enter side ");
    scanf("%d",&side);
    for(row=1;row<=side;row++)
    {
        for(colm=1;colm<=side-row;colm++)
        {
            printf(" ");
        }
        for(colm=1;colm<=side;colm++)
        {
            if(row==1 || row==side || colm==1 || colm==side )
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
