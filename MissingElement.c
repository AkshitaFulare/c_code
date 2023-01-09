#include<stdio.h>
int main()
{
    int array[5],d,a,sum=0,*ptr,size,sumAP,missing;
    printf("Enter the size of Array 1\n");
    scanf("%d",&size);
    int* sumPtr;
    sumPtr = &sum;
    printf("Enter the elements of Array\n");
    int count =1;
    for(ptr=array; ptr<array+(size-1); ptr++)
    {
        printf("Enter the element %d\n",count);
        count++;
        scanf("%d",ptr);
    }
    for(ptr=array; ptr<array+(size-1); ptr++)
    {
       *sumPtr=*sumPtr+(*ptr);
    }
    printf("Sum of Array is: %d\n",*sumPtr);
    printf("The first term 'a' in the given AP is \n");
    scanf("%d",&a);
    printf("The common difference 'd' in the given AP is \n");
    scanf("%d",&d);
    int* sumAPtr;
    sumAPtr = &sumAP;
    sumAP = (size * (2 * a + (size - 1)* d ))/ 2;
    printf("The value of sum of the AP is %d.\n",*sumAPtr);
    int* missingElement;
    missingElement = &missing;
    *missingElement = *sumAPtr - *sumPtr;
    printf("The missing element in array is %d.\n",*missingElement);
    return 0;
}
