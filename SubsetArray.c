#include<stdio.h>
int main()
{
    printf("Enter the size of the 1st array: ");
    int arr[50],arr2[50], size,i;
    scanf("%d",&size);
    printf("Enter the Element of the 1st array: \n");
     for(i=0;i<size;i++)
       {
          printf("Element %d is : ",i+1);
          scanf("%d",&arr[i]);
        }
    printf("Enter the size of the 2nd array: ");
    int size2;
    scanf("%d",&size2);
    printf("Enter the Element of the 2nd array: \n");
     for(i=0;i<size2;i++)
       {
          printf("Element %d is : ",i+1);
          scanf("%d",&arr2[i]);
        }
    int j,count=0;

    for(i=0;i<size;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(arr[i]==arr2[j])
            {
              count++;
            }
        }
    }
    if(count==size2)
    {
        printf("Array two is a subset of array one");
    }
    else
    {
         printf("Array two is not a subset of array one");
    }
    return 0;
}
