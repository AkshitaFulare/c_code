//program to arrange given array into descending order
#include<stdio.h>
int main()
{

    int arr[10],i,j,t,n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(arr[j]<arr[j+1])
           {
               t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
           } 
        }
    }
    printf("After sorting \n");
   for(i=0;i<n;i++)
   printf("%d\t",arr[i]);
   return 0;

}