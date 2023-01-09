//program to insert a new value in the array
#include<stdio.h>
int main()
{
    int arr[15],i,n,item,pos;
    printf("Enter the size of array ");
    scanf("%d",&n);//takes the value of size(n) of array from user

    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);//takes the value of arrays from user

    printf("Enter the new element  ");// taking value of new element to insert
    scanf("%d",&item);
    printf("Enter the position of for element ");// taking position for new element at which it should placed
    scanf("%d",&pos);

    n=n+1;
    int j;
    for(j=n-1;j>pos;j--)
    {
        arr[j]=arr[j-1];//inserting the new element of array

    }
    arr[j]=item;
    printf("\nAfter insertion \n");
     for(i=0;i<n;i++)
     printf("\n%d",arr[i]);
  return 0;
}
