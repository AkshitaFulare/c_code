#include<stdio.h>
int main()
{
     int width,length,row,col;
    printf("\n Program to print  Hollow Rectangle using stars ");
    printf("\n Enter the width of rectangle ");
    scanf("%d",&width);
    printf("\n Enter the length of rectangle ");
    scanf("%d",&length);
    for(row=1;row<=width;row++)
    {
        for(col=1;col<=length;col++)
        {
            if(row==1 || row==width || col==1 || col==length)
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
