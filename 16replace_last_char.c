#include<stdio.h>
int replace_last_char(char string[],char ch1,char ch2)
{
    int index=0,pos=0;
    while(string[index]!='\0')
    {
        if(string[index]==ch1)
        {
           pos=index;
        }
        index++;
    }
    string[pos]=ch2;
}
int main()
{
    char str1[50],ch1,ch2;
    printf("Program to replace the last occurrence of given character to another given character\n");
    printf("Enter the string\n");
    gets(str1);
    printf("Enter a character to be replaced\n");
    scanf("%c",&ch1);
    getchar();
    printf("Enter a character by which to be replaced\n");
    scanf("%c",&ch2);
    replace_last_char(str1,ch1,ch2);
    printf("After replacement\n%s\n",str1);
    return 0;
}
