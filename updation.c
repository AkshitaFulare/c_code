//program to update a new value from the old value in a array 
#include<stdio.h>
int main()
{
    int arr[15],i,n,item,new;
    printf("Enter the size of arrays ");
    scanf("%d",&n);//takes the value of size(n) of array from user 
    
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);//takes the value of arrays from user
    
    printf("\nEnter the element to be updated ");
    scanf("%d",&item);// stored the value  into the anther variable (given by user)

    printf("Enter the new value ");
    scanf("%d",&new);
    
    //here I  searched the value that need to be updated
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
     
     
     arr[i]=new;// replace the new value from old value 
    else
      printf("Element not found");

    
    printf("New array  after updation ");

    for(i=0;i<n;i++)
    printf("\n%d",arr[i]);
    return 0; 
}    