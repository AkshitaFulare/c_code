#include<stdio.h>
int main()
{
    int row,i,j;
    row=5;
    for(i=1;i<=row;i++)
    {
        for(j=row;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
