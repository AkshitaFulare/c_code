//program to calculate the sum of nth term of the series 5,7,9,11,13......
#include<stdio.h>
int main()
{
  int a,n,d,sum;
  printf("\n Enter the value of n  for the series 5,7,9...... ");
  scanf("%d",&n);
  d=2;
  a=5;
  sum=n/2 * 2*a + n*d - 1*d;

  printf("\nThe sum of terms is %d ",sum);
  return 0;
}