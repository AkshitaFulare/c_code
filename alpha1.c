   #include<stdio.h>
   int main()
{
   char ch;
   printf(" \n \n Enter the value=");
   scanf("%s",&ch);
   if((ch >=69 && ch <= 90)||( ch >=97 && ch <= 122))
   {
       printf("\nThe given vale is a alphabet");
   }
   else
   {
    printf("\nThe given value is not a alphabet\n \n  ");
   }
    return 0;
}
