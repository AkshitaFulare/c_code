#include<stdio.h>
void replace_first_word(char string[],char ch1,char ch2)
{
    int index=0;
    while(string[index]!='\0')
    {
        if(string[index]==ch1)
        {
            string[index]=ch2;
            break;
        }
        index++;
    }
}
int main()
{
    char str1[50],ch1,ch2;
    printf("Program to replace first occurrence of given character with another given character\n");
    printf("Enter the string\n");
    gets(str1);
    printf("Enter a character to be replaced\n");
    scanf("%c",&ch1);
    getchar();
    printf("Enter a character by which to be replaced\n");
    scanf("%c",&ch2);
    replace_first_word(str1,ch1,ch2);
    printf("After replacement\n%s\n",str1);
    return 0;
}
