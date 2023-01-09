
#include<stdio.h>
void remove_first_char(char string[],char ch1)
{
    int index=0;
    while(string[index]!='\0')
    {
        if(string[index]==ch1)
        {
            char temp;
            string[index]=string[index+1];
            break;
        }
        index++;
    }
}
int main()
{
    char str1[50],ch1;
    printf("Program to remove first occurrence of given character with another given character\n");
    printf("Enter the string\n");
    gets(str1);
    printf("Enter a character to be replaced\n");
    scanf("%c",&ch1);
    getchar();
   // printf("Enter a character by which to be replaced\n");
    //scanf("%c",&ch2);
    remove_first_char(str1,ch1);
    printf("After replacement\n%s\n",str1);
    return 0;
}
