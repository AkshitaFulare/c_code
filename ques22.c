// program to calculate total, average and percentage of five subjects


#include <stdio.h>

int main()
{
    float subject1,subject2,subject3,subject4,subject5; 
    float total, average, percentage;
    printf("Enter marks of five subjects: \n");
    scanf("%f", &subject1);
    scanf("%f", &subject2);
    scanf("%f", &subject3);
    scanf("%f", &subject4);
    scanf("%f", &subject5);

    /* Calculate total, average and percentage */
    total = subject1 + subject2 +subject3 + subject4 + subject5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    /* Print all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}