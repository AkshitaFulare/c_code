#include<stdio.h>
int swap(int* pnum1,int* pnum2)
{
    int temp;
    temp=* pnum1;
    * pnum1=* pnum2;
    * pnum2=temp;
}
int main()
{
    int num1,num2;
    printf("Program to swap vallues\n");
    printf("Enter num1\n");
    scanf("%d",&num1);
    printf("Enter num2\n");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("After swapping\n");
    printf("Num 1=%d\n",num1);
    printf("Num 2=%d\n",num2);
}
