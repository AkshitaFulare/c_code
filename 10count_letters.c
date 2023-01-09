#include<stdio.h>
int count_letter(char string[])
{
    int i=0,count=0;
    while(string[i]!='\0')
    {
        if(string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z')
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str1[50];
    int count;
    printf("Program to count the alphabets used given character\n");
    printf("Enter the string\n");
    gets(str1);
    count=count_letter(str1);
    printf("Total number of times alphabat occured in string = %d\n",count);
    return 0;
}
