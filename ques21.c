//program to calcualate area of equilateral triangle  
#include<stdio.h>
int main()
{
    float side,area;
    printf("Enter the lenght of side of equilateral triangle ");
    scanf(" %f",&side);
    area= 1.732/4*side*side;
    printf("\n area of equilateral triangle  is %f",area);
    return 0;

}