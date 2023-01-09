#include<stdio.h>  
int main()   
    {   
        float P , R , T , SI ;  
         printf( "Enter the inital amt ");
         scanf("%f",&P);
         printf("\n Enter the rate ");
         scanf("%f",&R); 
         printf("\n Enter the period of time " );
         scanf("%f",&T);
        SI  = (P*R*T)/100;   
        printf("\n\n Simple Interest is : %f", SI);  
        return 0;  
    }  