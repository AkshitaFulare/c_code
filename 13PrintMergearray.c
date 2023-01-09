#include<stdio.h>
int main()
{
    int integer[50],integer1[50],merge[50],arraysize,arraysize1,count=0;
    printf("\n Enter the size of  1st array ");
    scanf("%d",&arraysize);
    printf("\n Enter  first array elements ");
    for(int index=0;index<arraysize;index++)
    {
        printf("\n Enter the element %d : ",index+1);
        scanf("\n%d",&integer[index]);
    }
    printf("\n Enter the size of 2nd array ");
    scanf("%d",&arraysize1);
    printf("\n Enter  second array elements ");
    for(int index=0;index<arraysize1;index++)
    {
        printf("\n Enter the element  %d : ",index+1);
        scanf("\n%d",&integer1[index]);
        count++;
    }
    for(int index=0;index<arraysize;index++)
    {
        merge[index]=integer[index];
    }
    for(int index=arraysize;index<=count+arraysize;index++)
    {
        merge[index]=integer1[index-arraysize];
    }

    printf("\n Merged Array \n ");
    for(int index=0;index<arraysize+count;index++)
    {
        printf("%d",merge[index]);
        printf("\n");
    }

}
