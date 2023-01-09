#include<stdio.h>
int main()
{
   int num1,num2;
   printf("Enter the integer ");
   scanf("%d %d",&num1,&num2);
   if(num1>num2)
   {
       printf("\n %d is greater ",num1);
   }
   else 
   {
       printf("\n %d is greater ",num2);
   }
   return 0;
}  