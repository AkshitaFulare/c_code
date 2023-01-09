#include<stdio.h>
int main()
{
    int ch;
    float num1,num2;
    printf("\n   Here is the basic calculator .\n\n solve you problems ");
    printf("\n   Press ");
    printf("\n  1 for addition ");
    printf("\n  2 for substraction ");
    printf("\n  3 for multipication ");
    printf("\n  4 for division ");
    printf("\n\n  Enter your choice ");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n Enter the num1 ");
        scanf("%f",&num1);
        printf("\n Enter the num2 ");
        scanf("%f",&num2);
        printf("\nThe addition of numbers %f and %f is %f ",num1,num2,num1+num2);
    }
    else if(ch==2)
    {
        printf("\n Enter the num1 ");
        scanf("%f",&num1);
        printf("\n Enter the num2 ");
        scanf("%f",&num2);
        printf("\n The substraction of numbers %f and %f is %f ",num1,num2,num1-num2);
    }
    else if(ch==3)
    {
        printf("\n Enter the num1 ");
        scanf("%f",&num1);
        printf("\n Enter the num2 ");
        scanf("%f",&num2);
        printf("\n The multipication  of numbers %f and %f is %f ",num1,num2,num1*num2);
    }
    else if(ch==4)
    {
        printf("\n Enter the num1 ");
        scanf("%f",&num1);
        printf("\n Enter the num2 ");
        scanf("%f",&num2);
        if(num2==0)
        {
            printf("\n When an number is divided by 0 the answer will be always infinity ");
        }
        else
        {
            printf("\n The Division  of numbers %f and %f is %f ",num1,num2,num1/num2);
        }
    }
    else
    {
        printf("\n Enter the right choice " );
    }
    return 0;
}
