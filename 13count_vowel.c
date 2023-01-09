#include<stdio.h>
int count_vowel(char string[])
{
    int i=0,count=0;
    while(string[i]!='\0')
    {
        if(string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U' || string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o'  || string[i]=='u')
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
    printf("Program to count the vowels occurred  given character\n");
    printf("Enter the string\n");
    gets(str1);
    count=count_vowel(str1);
    printf("Total number of times vowels occurred in string = %d\n",count);
    return 0;
}
