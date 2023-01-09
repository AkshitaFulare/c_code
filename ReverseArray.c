#include<stdio.h>
int main()
{
    int array[5],count=0,*ptr,*ptrEnd,variable=1,n;
    printf("Enter the five integers\n");
    for(ptr=array; ptr<array+5; ptr++)
    {
        printf("The element %d is :\n",variable);
        variable++;
        scanf("%d",ptr);
    }
    ptrEnd = array+4;
    for(ptr=array; ptr<array+3; ptr++)
    {
        int temp= *ptr;
             *ptr = *ptrEnd;
             *ptrEnd=temp;
             *ptrEnd--;
    }
    variable=1;
    for(ptr=array; ptr<array+5; ptr++)
    {
        printf("The element %d after reverse is :\n",variable);
        variable++;
        printf("%d\n",*ptr);
    }
    return 0;
}

