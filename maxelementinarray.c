#include<stdio.h>
int max(int* a,int size)
{
    if(a==NULL && size<0)
    {
        return -1;
    }
    int result=0;
    for(int* ptr=a+1;ptr<a+size;ptr++)
    {
        if(*(a+result) < *ptr)
        {
            result=ptr-a;
        }
    }
    return result;
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
    printf("\n Maximum element of array is = %d",arr[result]);
    return 0;
}
