
#include<stdio.h>

void trim_leading(char* ptr)
{
    char* str;
    while(*ptr==' ')
    {
        for(str=ptr; *str!='\0'; str++)
        {
            *str=*(str+1);
        }
    }
}
int main()
{
   printf("Program to trim leading white space :\n");
   printf("The input string from the user is :\n");
   char StringName[20];
   gets(StringName);
   trim_leading(StringName);
   printf("Program after trimming leading white space and the final string is '%s'\n",StringName);

   return 0;
}

