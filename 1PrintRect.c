#include<stdio.h>
int main()
{
    int width,length,rows,colm;
    printf("\n Program to print rectangle using stars ");
    printf("\n Enter the breadth of rectangle ");
    scanf("%d",&width);
    printf("\n Enter the length of rectangle ");
    scanf("%d",&length);
    for(rows=1;rows<=width;rows++)
    {
        for(colm=1;colm<=length;colm++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
