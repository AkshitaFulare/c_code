
#include<stdio.h>
int find_last_char(char string[],char ch1)
{
    int i=0,pos=0;
    while(string[i]!='\0')
    {
        if(string[i]==ch1)
        {
            pos=i;
        }
        i++;
    }
    return pos;
}
int main()
{
    char str1[50],ch;
    int pos;
    printf("Program to find the last occurrence of given character\n");
    printf("Enter the string\n");
    gets(str1);
    printf("Enter a character\n");
    scanf("%c",&ch);
    pos=find_last_char(str1,ch);
    if(pos==0)
    {
         printf("Entered character does not exist in given string\n");
    }
    else
    {
        printf("The last occurrence of entered character is at position %d\n",pos);
    }
    return 0;
}
