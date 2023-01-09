#include<stdio.h>
void to_Toggle(char string[])
{
    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]>='A' && string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
        else if(string[i]>='a' && string[i]<='z')
        {
            string[i]=string[i]-32;
        }
        i++;
    }
}
int main()
{
    char str1[50],str2[50];
    printf("Program to toggle each character of given string\n");
    printf("Enter the string\n");
    gets(str1);
    to_Toggle(str1);
    printf("Toggle Case = %s\n",str1);
    return 0;
}
