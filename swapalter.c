#include<stdio.h>
int printArray(int arr[] , int size)
{
   for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
}
int swapalter(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        if((i+1)<size)
        {
            if(i%2==0)
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }

        }
    }
}
int main()
{
    int arr[]={5,7,9,11,13,17};
    int arr2[]={13,15,14,17,16};
    swapalter(arr , 6);
    printArray(arr , 6);
    printf("\n");
    swapalter(arr2 , 5);
    printArray(arr2 , 5);
}