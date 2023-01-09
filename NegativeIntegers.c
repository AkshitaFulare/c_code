#include<stdio.h>
int main()
{
    int array[5],count=0,*ptr,variable=1;
    printf("Enter the five integers\n");
    for(ptr=array; ptr<array+5; ptr++)
    {
        printf("The element %d is :\n",variable);
        variable++;
        scanf("%d",ptr);
    }
    for(ptr=array; ptr<array+5; ptr++)
    {
        if((*ptr)<0)
        {
            count++;
        }
    }
    printf("The negative integers in array is %d\n",count);
    return 0;
}

