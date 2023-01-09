#include<stdio.h>
int main()
{
    int side,row,colm;
    printf("\n Program To print parallelogram using stars ");
    printf("\n Enter the length of side ");
    scanf("%d",&side);
    for(row=1;row<=side;row++)
    {
        for(colm=1;colm<=side-row;colm++)
        {
            printf(" ");
        }
        for(colm=1;colm<=side;colm++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
