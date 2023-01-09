#include<stdio.h>
void to_Upper(char string[])
{
    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]>='a' && string[i]<='z')
        {
            string[i]=string[i]-32;

        }
        i++;
    }
}
int main()
{
    char str1[50],str2[50];
    printf("Program to convert all Characters to uppercase character of given string\n");
    printf("Enter the string\n");
    gets(str1);
    to_Upper(str1);
    printf("Upper Case = %s\n",str1);
    return 0;
}
