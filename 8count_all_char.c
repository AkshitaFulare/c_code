

#include<stdio.h>
int count_all_char(char string[],char ch1)
{
    int i=0,count=0;
    while(string[i]!='\0')
    {
        if(string[i]==ch1)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str1[50],ch;
    int count;
    printf("Program to count all occurrence of given character\n");
    printf("Enter the string\n");
    gets(str1);
    printf("Enter a character\n");
    scanf("%c",&ch);
    count=count_all_char(str1,ch);
    if(count==0)
    {
         printf("Entered character does not exist in given string\n");
    }
    else
    {
        printf("No. of occurrence of character %c is = %d\n",ch,count);
    }
    return 0;
}
