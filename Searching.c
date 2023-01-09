#include<stdio.h>
int main()
{
    int array[5],count=0,*ptr,variable=1,search,index=0,flag;
    printf("Enter the five integers\n");
    for(ptr=array; ptr<array+5; ptr++)
    {
        printf("The element %d is :\n",variable);
        variable++;
        scanf("%d",ptr);
    }
    int* searchPtr;
    searchPtr = &index;
    printf("The element that we want to search :\n");
    scanf("%d",&search);
    for(ptr=array; ptr<array+5; ptr++)
    {
         index++;
        if(search==(*ptr))
        {
            printf("Searched Element found in array \n");
            flag=1;
            break;
        }
    }
      if(flag==1)
    {
        printf("\n%d is found at %d index",search,*searchPtr);
    }
    else
    {
        printf("\n%d is found at -1 index",search);
    }
    return 0;
}
