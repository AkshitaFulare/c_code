#include<stdio.h>
int main()
{
    int* ptr1,*ptr, *ptr2,array[3];
    printf("Program to print the largest number\n");
    for(ptr1=array; ptr1<array+1; ptr1++)
    {
        printf("First number is : \n");
        scanf("%d",ptr1);
        for(ptr2=array; ptr2<array+1; ptr2++)
        {
            printf("Second number is : \n");
            scanf("%d",ptr2);
            if(*(ptr1)> *(ptr2))
            {
                printf("%d is the largest number",*ptr1);
            }
            else
            {
                printf("%d is the largest number",*ptr2);
            }
        }
    }
    return 0;
}

