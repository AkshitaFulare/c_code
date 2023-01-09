#include<stdio.h>
int main()
{
    int array[5],copyArray[5],*ptr,*ptr1,count=1;
    printf("Enter the five integers\n");
    for(ptr=array; ptr<array+5; ptr++)
    {
        printf("The element %d is :\n",count);
        count++;
        scanf("%d",ptr);
    }
    ptr1 = copyArray;
    for(ptr=array; ptr<array+5; ptr++)
    {
        *ptr1=*ptr;
         ptr1++;
    }
    for(ptr1=copyArray; ptr1<copyArray+5; ptr1++)
    {
        printf("The Copy Array is %d\n", *ptr1);
    }
    return 0;
}

