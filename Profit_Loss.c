#include<stdio.h>
int main()
{
    int cp,sp,amt;
     printf("\n Program to take cost price and selling price and  analyise whether there is profit or loss ");
     printf("\n Enter the cost price of item ");
     scanf("%d",&cp);
     printf("\n Enter the selling price of item ");
     scanf("%d",&sp);
     if(cp>sp)
     {
         amt=cp-sp;
         printf("\n You have a loss of rupees %d ",amt);
     }
     else if(sp>cp)
     {
         amt=sp-cp;
         printf("\n Congratulations ! You have a profit of rupees %d ",amt); 
     }
     else 
     {
         printf("\n Since the sp and cp are equal there is no profit or loss ");
     }
     return 0;
}