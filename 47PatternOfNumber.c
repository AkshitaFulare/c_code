#include<stdio.h>
int main()
{
    int rows,columns,numrow;
    printf("Program to print pattern\n");
    printf("------------------------\n");
    printf("Enter Rows:\n");
    scanf("%d", &numrow);
    printf("Pattern with %d rows:\n",numrow);
    for(rows=1; rows<=numrow; rows++)
    {
        for(columns=1; columns<=rows; columns++)
        {
            printf("%d", columns);
        }
        printf("\n");
    }
    return 0;
}
