#include<stdio.h>
int main()
{
    int array1[5], *ptr3,*ptr1, *ptr2, array2[5], mergeArray[10],size1,size2,size3,index1,index2,index3;
    printf("Enter the size of Array 1\n");
    scanf("%d",&size1);
    printf("Enter the size of Array 2\n");
    scanf("%d",&size2);
    for(ptr1=array1; ptr1<array1+(size1); ptr1++)
    {
        printf("Sorted elements of Array 1 are\n");
        scanf("%d",ptr1);
    }
    for(ptr2=array2; ptr2<array2+(size2); ptr2++)
    {
        printf("Sorted elements of Array 2 are\n");
        scanf("%d",ptr2);
    }
    ptr1=array1;
    ptr2=array2;
    size3 = size1+size2;
    for(ptr3=mergeArray; ptr3<mergeArray + (size3); ptr3++)
    {
        if(ptr1<array1 +(size1) && ptr2<array2+size2)
        {
            if(*ptr1 > *ptr2)
            {
                *ptr3 = *ptr2;
                ptr2++;
            }
            else
            {
                *ptr3 = *ptr1;
                ptr1++;
            }
        }
        else
        {   if(ptr1<array1 + size1)
            {
                *ptr3 = *ptr1;
                ptr1++;
            }
            if(ptr2<array2+size2)
            {
                *ptr3 = *ptr2;
                ptr2++;
            }
        }
    }
    printf("Merged Elements of Array1 and Array2 are\n");
    for(ptr3=mergeArray; ptr3<mergeArray + (size3); ptr3++)
    {
        printf("%d\n",*ptr3);
    }
    return 0;
}
