#include<stdio.h>
int strlen(char string[])
{
    int count=0,i=0;
    while(string[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char str[50];
    int length;
    printf("Program to calculate length of a string\n");
    printf("Enter the string\n");
    gets(str);
    length=strlen(str);
    printf("Length of string is=%d\n",length);
}
