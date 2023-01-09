#include<stdio.h>

int main()
{
    int a[]={11,24,56,86,45};
    int size=5;
    int item =26;
    int index=5;
    int i ,j;
    for(i=0;i<size;i++)
    {
    printf("\nelements in the array at index %d is: %d",i,a[i]);
    }
    size=size+1;
    
    for(j=size-1;j>=index;j--) 
   { 
    a[j]=a[j-1];
   }
    a[j]=item;
    printf(" \n After insertion ");
    for(i=0;i<size;i++)
    {
    printf("\n %d",a[i]);
    }
    
    return 0;
}
