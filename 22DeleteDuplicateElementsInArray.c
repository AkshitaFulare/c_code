#include<stdio.h>
int main()
{
    int integer[7],count=0,array_size,array_size1,count1=0;
    printf("\n Enter the size of array ");
    scanf("%d",&array_size);
    printf("\n Program to delete the the duplicate numbers in array   ");
    printf("\n Enter the numbers ");
    for(int index=0;index<array_size;index++)
    {
        printf("\n Enter the value of element %d ",index+1);
        scanf("%d",&integer[index]);
    }
    array_size1=array_size;
    for(int index=0;index<array_size;index++)
    {

        for(int index1=index+1;index1<array_size;index1++)
        {
            if(integer[index]==integer[index1])
            {

                for(int index2=index;index2<array_size-1;index2++)
                {
                    integer[index2]=integer[index2+1];

                }
                array_size--;
                index1--;
            }
        }
    }
    printf("\n Array  after deleting duplicated element ");
    for(int index=0;index<array_size;index++)
    {
        printf("%d\n",integer[index]);
    }
    return 0;
}

