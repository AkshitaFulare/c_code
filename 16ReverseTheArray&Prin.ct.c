
#include<stdio.h>
int main()
{
    int integer[5],count=0;
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
            if(n<4)
            {
                int temp=integer[index];
                integer[index]=integer[7-n];
                integer[7-n]=temp;
                n++;
            }

        }

    for(int index=0;index<7;index++)
    {
        printf("%d\n",integer[index]);
    }
    return 0;
}
