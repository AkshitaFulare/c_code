
#include<stdio.h>
int main()
{
    int array[100],count=0,size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the elements of array\n");
    for(int index=0;index<size;index++)
    {
        printf("Element %d is : ",index+1);
        scanf("%d",&array[index]);
    }
    for(int index=0;index<size;index++)
    {

        if(array[index]!=0)
        {
            array[count]=array[index];
            count++;
        }
    }
    printf("Total non zero present in array are %d \n",count);
    while(count < size)
    {
       array[count] = 0;
       count++;
    }
    printf("Shifted zero element in array \n");
    for(int index=0; index<size;index++)
    {
        printf("%d\n",array[index]);
    }

    return 0;
}
