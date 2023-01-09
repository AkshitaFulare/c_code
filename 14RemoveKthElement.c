#include<stdio.h>
int main()
{
    int integer[5],k;
    printf("\n Enter the five integers ");
    for(int index=0;index<5;index++)
    {
       printf("\n Enter the element %d : ",index+1);
       scanf("\n%d",&integer[index]);
       printf("\n");
    }
    printf("\n Enter the position of element  to  delete ");
    scanf("%d",&k);
    if(k>5)
    {
        printf("\n Enter the choice from 1-5");
    }
    else
    {
        for(int index=k-1;index<5;index++)
        {
            integer[index]=integer[index+1];
        }
        printf("\n Array Elements after deleting %dth element\n",k);
        for(int index=0;index<4;index++)
        {
            printf("\n Element %d : ",index+1);
            printf("%d",integer[index]);
            printf("\n");
        }
    }
    return 0;
}
