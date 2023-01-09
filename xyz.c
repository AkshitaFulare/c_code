#include<stdio.h>
int StringLength(char* ptr)
{
   if(ptr==NULL)
   {
      return -1;
   }
   int count=0;
   while(*ptr!=0)
   {
      ptr++;
      count++;
   }
   return count;
}
void remove_last_char(char* ptr, char lastC)
{
    char*str;
    char*ctr;
    int result = StringLength(ptr);
    for(str=ptr + (result-1); str>=ptr; str--)
    {
        if(*str==lastC)
        {
           for(ctr=str; *ctr!='\0'; ctr++)
           {
               *ctr=*(ctr+1);
           }
               break;
        }
    }
}
int main()
{
   printf("Program to remove last character :\n");
   printf("The input string from the user is :\n");
   char StringName[20];
   gets(StringName);
   char f;
   printf("The input check char is :\n");
   scanf("%c",&f);
   printf("Program after removing last character is:\n");
   remove_last_char(StringName,f);
   puts(StringName);
   return 0;
}
