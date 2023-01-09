
#include<stdio.h>
int main()
{
    int integer[7],array_size,array_size1,temp,index1,k;
    printf("\n Program to Rotate  the array elements ");
    printf("\n Enter the size of array ");
    scanf("%d",&array_size);
    printf("\n Enter the numbers ");
    for(int index=0;index<array_size;index++)
    {
        printf("\n Enter the value of element %d ",index+1);
        scanf("%d",&integer[index]);
    }
    printf("\n Enter the value of k to rotate the array ");
    scanf("%d",&k);
    if(k>=0)
    {
            temp=integer[k-1];
            for(index1=k-1;index1<array_size;index1++)
            {
                integer[index1]=integer[index1+1];
            }
            integer[array_size-1]=temp;


    }

    else if(k<0)
    {
            temp=integer[array_size-1];
            for(index1=array_size-1;index1>0;index1--)
            {
                integer[index1]=integer[index1-1];
            }
            integer[index1]=temp;


    }
    else
    {
        printf("\n Enter write choice ");
    }
    printf("\n Array after rotation ");
    for(int index=0;index<array_size;index++)
    {
        printf("%d\t",integer[index]);
    }
  return 0;
}
