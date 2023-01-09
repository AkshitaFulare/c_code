#include<stdio.h>
void to_Lower(char string[])
{
    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]>='A' && string[i]<='Z')
        {
            string[i]=string[i]+32;

        }
        i++;
    }
}
int main()
{
    char str1[50],str2[50];
    printf("Program to convert all Characters to lowercase character of given string\n");
    printf("Enter the string\n");
    gets(str1);
    to_Lower(str1);
    printf("Lower Case = %s\n",str1);
    return 0;
}
