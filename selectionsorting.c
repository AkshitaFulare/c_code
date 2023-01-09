#include<stdio.h>
int main()
{
    int a[50],i,n,j,t,min;
    printf("Enter the no of array ");
    scanf("%d",&n);
    printf("Enter the arrays ");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      } 
    for(i=0;i<n-1;i++)
   {
      
       min=i;
       for(j=1;j<n-1;j++)
       {
           if(a[min]>a[j])
           {
           min=i=1;
           }
       
       t=a[i];
       a[i]=a[i+1]; 
      a[i+1]=t;
       } 
   }
   for(i=0;i<n;i++)
      {
        printf("\n%d",a[i]);
      } 
      return 0;
}   
