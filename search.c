//program to search and print the element of the array
#include<stdio.h>
int main()
{
    int arr[15],i,n,item;
    printf("Enter the size of array ");
    scanf("%d",&n);//takes the value of size(n) of array from user 
    
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);//takes the value of arrays from user

    printf("\nEnter the element to be searched ");
    scanf("%d",&item);// stored the value  into the anther variable (given by user)
    
    int flag; 
    flag=0;//initialize th value of flag to 0
    for(i=0;i<n;i++)
    {
        if(item==arr[i]) // camparing the stored value with array values 
        {
         flag=1;
         break;   
        }
    }
    if(flag==1)
      printf("\n%d Element found at index %d",item,i);

    else
      printf("Element not found");
  
return 0;  
}