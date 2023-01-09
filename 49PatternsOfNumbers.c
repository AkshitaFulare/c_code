int main() {
    int row,column,numrow;
    printf("Program to print pattern\n");
    printf("------------------------\n");
    printf("Enter Rows:\n");
    scanf("%d", &numrow);
    printf("Pattern with %d rows:\n",numrow);
    for(row=1; row<=numrow; row++)
    {
        for(column=row; column>=1; column--)
        {
            printf("%d", column);
        }

        printf("\n");
    }
   return 0;
}
