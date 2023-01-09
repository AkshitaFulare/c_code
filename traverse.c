//program to traverse the elements of array 
#include<stdio.h>
int main()
{
    int arr[15],n,i;
    printf("Enter the size of array ");
    scanf("%d",&n);//takes the value of size(n) of array from user 
    
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);//takes the value of arrays from user 

    printf("Arrays are \n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]); // to print the output on console or outpur screen
    return 0;
}