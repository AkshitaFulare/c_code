
#include<stdio.h>
int max(int array[],int size)
{
    int max=array[0];
    for(int index=0;index<size;index++)
    {
        if(max<array[index])
        {
            max=array[index];
        }
    }
    return max;
}
int main()
{
    int arr[5],n,result;
    printf("\nEnter the size of array ");
    scanf("%d",&n);
    printf("\n Enter the elements in array ");
    for(int index=0;index<n;index++)
    {
        printf("\n Element %d = ",index+1);
        scanf("%d",&arr[index]);
    }
    result=max(arr,n);
    printf("\n Maximum element of array is = %d",result);
    return 0;
}
