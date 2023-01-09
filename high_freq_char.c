#include<stdio.h>
int StringLength(char* ptr,char ch)
{
  char* str;
   int count=0;
   for(str=ptr;*str!=0; str++)
   {
       if(*str==ch)
       {
             count++;
       }
   }
   return count;
}
char high_frequency(char*ptr)
{
    int freq_Element;
    int highest_freq;
    char high_freq_char= *ptr;
    char* str;
    for(str=ptr+1; *str!='\0'; str++)
    {
        freq_Element=StringLength(ptr,*str);
        highest_freq=StringLength(ptr,high_freq_char);
        if(highest_freq <= freq_Element)
        {
            high_freq_char = *str;
        }
    }
    return high_freq_char;
}

int main()
{
    char str1[100];
    printf("Program to return character with high freqency\n");
    printf("Enter the string\n");
    gets(str1);
    char result;
    result=high_frequency(str1);
    printf("The  character with high frequency is %c\n",result);
    return 0;
}
