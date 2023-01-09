#include<stdio.h>
int main()
{
    int integer[50],max;
    printf("\n Enter the integers ");
    for(int index=0;index<5;index++)
    {
        printf("\n Enter the element %d : ",index+1);
        scanf("%d",&integer[index]);
        printf("\n");
    }
    max=integer[0];
    for(int index=1;index<5;index++)
    {
        if(integer[index]>max)
        {
            max=integer[index];
        }
    }
    printf("\n The elememt of array having maximum value is : %d \n",max);
    return 0;
}
