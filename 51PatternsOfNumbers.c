#include<stdio.h>
int main()
{
    int row, colm, numrow;
    printf("Program to print pattern\n");
    printf("Enter Rows:\n");
    scanf("%d", &numrow);
    printf("Pattern with %d rows\n",numrow);
    for(row=numrow; row>=1; row--)
    {
        for(colm=numrow; colm>=row; colm--)
        {
            printf("%d", colm);
        }
        printf("\n");
    }
    return 0;
}
