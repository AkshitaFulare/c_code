#include<stdio.h>
int main()
{
    int integer[7],k,new_element,count=0;
    printf("\n Enter the seven integers ");
    for(int index=0;index<7;index++)
    {
       printf("\n Enter the element %d : ",index+1);
       scanf("\n%d",&integer[index]);
       printf("\n");
       count++;
    }
    printf("\n Enter the position for inserting new element  ");
    scanf("%d",&k);
    printf("\n Enter the value of new element ");
    scanf("%d",&new_element);
    int index1;
    for(index1=count;index1>k-1;index1--)
    {
            integer[index1]=integer[index1-1];
    }
    integer[index1]=new_element;
    printf("\n New array after insertion ");
    for(int index=0;index<7;index++)
    {
        printf("%d",integer[index]);
        printf("\n");
    }
    return 0;
}
