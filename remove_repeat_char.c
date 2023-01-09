#include<stdio.h>
void remove_repeat_char(char* string)
{
    char* ptr;
    char* str;
    for(ptr=string;*ptr!='\0';ptr++)
    {
        if(*ptr==*(ptr+1))
        {
            for(str=ptr;*str!='\0';str++)
            {
                *str=*(str+1);
            }
            ptr--;
        }
    }
}
int main()
{
    char str1[20],ch_last;
    printf("Program to remove the repeated characters\n");
    printf("Enter the string\n");
    gets(str1);
    remove_repeat_char(str1);
    printf("After removing all the repeated characters\n");
    puts(str1);
    return 0;
}
