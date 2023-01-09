#include<stdio.h>
#define size 5
int arr[size];
int top,ch,i,val;

void push();
void pop();
void peak();
void display();

int main()
{
        top=-1;
    do
    {
     printf("\n\n\t\t\tMAIN MENU\t\t\t\n");
     printf("\t\t\t1.PUSH\n");
     printf("\t\t\t2.POP\n");
     printf("\t\t\t3.PEAK\n");
     printf("\t\t\t4.DISPLAY\n");
     printf("\t\t\t5.EXIT\n");
     printf("\tENTER your choice ");
     scanf("%d",&ch);
     switch(ch)
     {
      case 1:
      {
       push();
       break;
      }
      case 2:
      {
       pop();
       break;
      }
      case 3:
      {
       peak();
       break;
      }
      case 4:
      {
       display();
       break;
      } 
      case 5:
      {
       break;
      }
      default:
      {
          printf("\n Invalid choice\n ");
      }
     }

    }while(ch!=5);
 return 0;
}

void push()
{ // Taking or pushing the element in stack
 if(top==size-1)
 {
  printf("\nStack is full\n");
 }
 else
 {
     printf("\nEnter the value to be pushed  ");
     scanf("%d",&val);
     top++;//top=top+1;
     arr[top]=val;
 }
}
void pop()
{   //delete or pop the  top element 
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("popped element is %d\n",arr[top]);
        top--;
    }
}
void peak()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nTop element is%d\n",arr[top]);
    }
}void display()
{
  if(top >= 0)
 {
   //  Print the stack
   printf("\nELEMENTS IN THE STACK\n\n");
   for(i = top ; i >= 0 ; i--)
   printf("\t%d\n",arr[i]);
   
 }
 else
 {
  printf("\n\t\t\tEMPTY STACK\n");
 }
}

