#include<stdio.h>
int main()
{
    int a[2][3];
    printf("Enter the array elements\n");
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("Array element at a[%d][%d]=",r,c);
            scanf("%d",&a[r][c]);
        }
    }
    int max=a[0][0];
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(a[r][c]>max)
            {
                max=a[r][c];
            }
        }
    }

        printf("Maximum value in the given matrix = %d",max);
}








