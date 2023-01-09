#include<stdio.h>
void remove_repeat_space(char*string)
{
    char*ptr;
    char*str;
    for(ptr=string; *ptr!='\0'; ptr++)
    {
        if(*ptr== ' ' && *(ptr+1) == ' ')
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
    char str1[20];
    printf("Program to remove repeated space in given string\n");
    printf("Enter the string\n");
    gets(str1);
    remove_repeat_space(str1);
    printf("After removing all the repeated spaces\n");
    puts(str1);
    return 0;
}
