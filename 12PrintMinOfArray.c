#include<stdio.h>
int main()
{
    int integer[50],min;
    printf("\n Enter the integers ");
    for(int index=0;index<5;index++)
    {
        printf("\n Enter the element %d : ",index+1);
        scanf("%d",&integer[index]);
        printf("\n");
    }
    min=integer[0];
    for(int index=1;index<5;index++)
    {
        if(integer[index]<min)
        {
            min=integer[index];
        }
    }
    printf("\n The elememt of array having minimum value is : %d \n",min);
    return 0;
}
