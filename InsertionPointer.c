#include<stdio.h>
int main()
{
    printf("Enter the elements of the array\n");
    int array[6],count=1,position,insert;
    int* ptr;
    for(ptr=array; ptr<array+5; ptr++)
    {
        printf("Element %d is : \n",count);
        count++;
        scanf("%d",ptr);
    }
    int* ptrPosition;
    ptrPosition = &position;
    printf("The position in which we want to insert the element:\n");
    scanf("%d",ptrPosition);
    printf("The element that we want to insert :\n");
    scanf("%d",&insert);
    for(ptr=array+5; ptr>array+(position)-1; ptr--)
    {
        *ptr=*(ptr-1);
    }
    *ptr=insert;
    count=1;
    for(ptr=array; ptr<array+6; ptr++)
    {
        printf("Element %d after insertion is :\n",count);
        count++;
        printf("%d\n",*ptr);
    }
    return 0;
}
