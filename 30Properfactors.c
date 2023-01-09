#include<stdio.h>
int main()
{
    int num, factor, sum=0;
    printf("This is a program to find perfect divisors of a number... \nEnter a number : \n");
    scanf("%d",&num);
    printf("All the proper divisors of %d are : ",num);
    for(factor=1;factor<num;factor++)
    {
        if(num%factor==0)
        {
            printf("\n%d",factor);
        }
    }

}
