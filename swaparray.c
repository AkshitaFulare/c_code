#include<stdio.h>
int main()
{
    int integer[5];
    printf("\n Enter the five integers ");
    for(int index=0;index<5;index++)
    {
       scanf("\n%d",&integer[index]);
       printf("\n");
    }
    printf("\n Given integers are ");
    for(int index=0;index<5;index++)
    {
        printf("\n%d\n",integer[index]);
    }
    printf("\n Swapped array are ");
    for(int index=0;index<5;index++)
    {
        int temp=integer[0];
        integer[0]=integer[4];
        integer[4]=temp;
    }
    for(int index=0;index<5;index++)
    {
        printf("\n%d\n",integer[index]);
    }
    return 0;
}
