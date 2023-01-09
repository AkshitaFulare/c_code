#include<stdio.h>
int count_consonant(char string[])
{
    int i=0,count=0,count1=0;
    while(string[i]!='\0')
    {
        if(string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U' || string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o'  || string[i]=='u')
        {
            count++;
        }
        else if(string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z')
        {
            count1++;
        }
        i++;
    }
    return count1;
}
int main()
{
    char str1[50];
    int count;
    printf("Program to count the consonant occurred  given string\n");
    printf("Enter the string\n");
    gets(str1);
    count=count_consonant(str1);
    printf("Total number of times consonant occurred in string = %d\n",count);
    return 0;
}
