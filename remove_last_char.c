#include<stdio.h>
int strlength(char* string)
{
    int count=0;
    while(*string!=0)
    {
        string++;
        count++;
    }
    return count;
}
void remove_last_char(char* string, char ch_last)
{
    int count1;
    count1=strlength(string);
    char* ptr;
    char* str;
    for(ptr=string+ (count1-1);ptr>=string; ptr--)
    {
        if(*ptr==ch_last)
        {
            for(str=ptr;*str!='\0';str++)
            {
                *str=*(str+1);
            }
            break;
        }
    }
}
int main()
{
    char str1[20],ch_last;
    printf("Program to remove the last occurrence of given character to another given character\n");
    printf("Enter the string\n");
    gets(str1);
    printf("Enter a character to be remove\n");
    scanf("%c",&ch_last);
    //getchar();
    remove_last_char(str1,ch_last);
    printf("After removing last occurance of character %c \n",ch_last);
    puts(str1);
    return 0;
}
