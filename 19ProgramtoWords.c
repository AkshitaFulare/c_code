#include<stdio.h>
int main()
{
    int number, reverse =0, reverseNum, remainder,result;
    printf("Program to calculate reverse of digits of number \n");
    scanf("%d", &number );
    while(number!=0)
    {
        remainder=number%10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    printf("The reverse order of number is %d\n", reverse);
    reverseNum = reverse;
    while(reverseNum !=0)
    {
        result = reverseNum%10;
        switch(result)
        {
        case 0 :
        {
        printf("Zero ");
        break;
        }
        case 1 :
        {
        printf("One ");
        break;
        }
        case 2 :
        {
        printf("Two ");
        break;
        }
        case 3:
        {
        printf("Three ");
        break;
        }
        case 4 :
        {
        printf("Four ");
        break;
        }
        case 5 :
        {
        printf("Five ");
        break;
        }
        case 6 :
        {
        printf("Six ");
        break;
        }
        case 7 :
        {
        printf("Seven ");
        break;
        }

        case 8 :
        {
        printf("Eight ");
        break;
        }
        case 9 :
        {
        printf("Nine");
        break;
        }
        default:
        printf("Wrong choice");
        }
        reverseNum = reverseNum/10;
    }


    return 0;
}


