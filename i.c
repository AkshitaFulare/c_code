#include<stdio.h>
int main()
{
   int num1,num2,num3;
   printf("Enter the integer ");
   scanf("%d %d %d",&num1,&num2,&num3);
   if(num1>num2 && num1>num3)
   {
       printf("%d in greater ",num1);
   }
   else if(num2>num1 && num2>num3)
   {
       printf("%d in greater ",num2);
   }
   else 
   {
       printf(" %d in greater ",num3);
   }
   return 0;
}
