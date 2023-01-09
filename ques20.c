// Program to calculate area of trianlge using base and height 
#include<stdio.h>
int main()
{
 int base,h;
 float area;
 printf("Enter the base  length of triangle  ");
 scanf("%d",&base);
 printf("Enter the  height of triangle  ");
 scanf("%d",&h);
 area=.5* base*h;
 printf("Area of trianlge %f",area);
 return 0;
}