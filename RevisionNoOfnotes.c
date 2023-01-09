
#include <stdio.h>
int NoOfNotes(int number)
{
    int notes,temp=0;
    notes=number/2000;
    temp=temp+notes;
    number=number%2000;
    notes=number/1000;
    temp=temp+notes;
    number=number%1000;
    notes=number/500;
    temp=temp+notes;
    number=number%500;
    notes=number/100;
    temp=temp+notes;
    number=number%100;
    notes=number/50;
    temp=temp+notes;
    number=number%50;
    notes=number/20;
    temp=temp+notes;
    number=number%20;
    notes=number/10;
    temp=temp+notes;
    number=number%10;
    notes=number/5;
    temp=temp+notes;
    number=number%5;
    notes=number/1;
    temp=temp+notes;
    number=number%1;
    return temp;
}
int main()
{
    printf("Program to count minimum number of notes required\n");
    int notes;
    printf("The input of notes is\n");
    scanf("%d",&notes);
    int count=NoOfNotes(notes);
    printf("The minimum number of notes required is %d\n",count);
}
