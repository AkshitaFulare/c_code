
#include<stdio.h>
int main()
{
    int integer[7],count=0;
    printf("\n Enter the seven integers ");
    for(int index=0;index<7;index++)
    {
        printf("Enter the element %d : ",index+1);
       scanf("\n%d",&integer[index]);
       printf("\n");
    }
        int n=1;
        for(int index=0;index<7/2;index++)
        {


                int temp=integer[index];
                integer[index]=integer[7-n];
                integer[7-n]=temp;
                n++;


        }

    for(int index=0;index<7;index++)
    {
        printf("\n Element %d : ",index+1);
        printf("%d\n",integer[index]);
    }
    return 0;
}
