#include<stdio.h>
void strCat(char *ptr,char*str)
{
    while(*ptr != '\0')
    {
        ptr++;
    }
    while(*str != '\0')
    {
        *ptr=*str;
        ptr++;
        str++;
    }
    *ptr='\0';
}
int main()
{
    char str1[20],str2[10];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
    strCat(str1,str2);
    printf("After concatenating string 1 and string 2 new string is %s.",str1);
    return 0;
}

