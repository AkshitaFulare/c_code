//program to calculate the perimeter and area of circle  
#include<stdio.h>
int main()
{
 int radius;
 float peri,area;
 radius=4;
 peri=2*3.14*radius;
 printf(" The  perimeter of circle with radius %d is= %f ",radius,peri);
 area=3.14*radius*radius;
 printf("\n The  Area of circle with radius %d is= %f  ",radius,area);

 return 0;    
}