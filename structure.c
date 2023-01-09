#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int smarks[5];
    float prc;

};
void display_data(struct student s1[],int n)
{

    printf("Students Details\n");
    for(int str=0;str<n;str++)
    {
       printf("Details of student %d\n",str+1);
       printf("Name : %s\n",s1[str].name);
       printf("Roll number:%d\n",s1[str].rollno);
       printf("Marks:\n");
       int sum=0;
       for(int ptr=0;ptr<5;ptr++)
       {
           printf("Marks in subject %d\n",s1[str].smarks[ptr]);
           sum+=s1[str].smarks[ptr];
       }
       s1[str].prc=(sum/500)*100;
       printf("Percentage:%.f\n",s1[str].prc);
    }

}
int main()
{
    struct student s[10];
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    printf("Enter the student details\n");
    for(int index=0;index<n;index++)
    {
        printf("Enter the details of student %d\n",index+1);
        printf("Enter the name:\n");
        fflush(stdin);
        gets(s[index].name);
        printf("Enter the rollno\n");
        scanf("%d",&s[index].rollno);
        printf("Enter the marks\n");
        for(int ctr=0;ctr<5;ctr++)
        {
            scanf("%d",&s[index].smarks[ctr]);
        }
    }
    display_data(s,n);
    return 0;
}
