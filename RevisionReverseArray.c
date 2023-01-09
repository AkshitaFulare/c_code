#include<stdio.h>
int reverse_array(int array[],int size)
{
    int size1=1;
    for(int index=0;index<size/2;index++)
    {
        int temp;
        temp=array[index];
        array[index]=array[size-size1];
        array[size-size1]=temp;
        size1++;
    }
}
int main()
{
    printf("Program to reverse an array:\n");
    int array[100],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(int i=0;i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    reverse_array(array,n);
    printf("After reversing order\n");
    for(int i=0;i<n; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
