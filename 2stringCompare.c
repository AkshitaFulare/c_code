#include<stdio.h>
int strcmp(char string1[],char string2[])
{
    int i=0,flag=0;
    while(string1[i]!='\0' && string2[i]!='\0')
    {
        if(string1[i]!= string2[i])
        {
            flag =1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str[50],str2[50];
    int result;
    printf("Program to Compare two strings \n");
    printf("Enter the  First string\n");
    gets(str);
    printf("Enter the  second string\n");
    gets(str2);
    result=strcmp(str,str2);
    if(result==1)
    {
        printf("Given two strings are same\n");
    }
    else
    {
        printf("Given two strings are not same\n");
    }
}
