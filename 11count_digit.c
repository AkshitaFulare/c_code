#include<stdio.h>
int count_digit(char string[])
{
    int i=0,count=0;
    while(string[i]!='\0')
    {
        if(string[i]>='0' && string[i]<='9')
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str1[50];
    int count;
    printf("Program to count the digits occurred given character\n");
    printf("Enter the string\n");
    gets(str1);
    count=count_digit(str1);
    printf("Total number of times digits occurred in string = %d\n",count);
    return 0;
}
