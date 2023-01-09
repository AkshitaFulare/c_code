#include<stdio.h>
int main()
{
    int array[500];
    int enter=1;
    char choice;
    int size;
    while(enter=1)
    {
        printf("Enter the Size of Array: ");
        scanf("%d",&size);
        if(size>500)
        {
            printf("Sorry, size of array couldn't be extended, the range of array should be less than 500.\n");
            printf("Do you still want to continue?\n");
            printf("Enter 'Y' for Yes and 'N' for No: \n");
            scanf(" %c", &choice);
            if(choice =='Y'|| choice =='y')
            {
                continue;
            }
            else if(choice == 'N' || choice=='n')
            {
                enter = 2;
            }
        }
        else
        {
            int count,*ptr, *ptr1, variable = 1, search, index,flag=0;
            for (ptr = array; ptr < array + (size); ptr++)
            {
              printf ("The element %d is :\n", variable);
              variable++;
              scanf ("%d", ptr);
            }
            for (ptr = array; ptr < array + (size-1); ptr++)
            {
                count=0;
                for (ptr1 = array; ptr1 < array + (size); ptr1++)
            	{
            	    if( *(ptr) == *(ptr1) )
            	    {
                	      count++;
            	    }
            	}
            	if(count>=(size/2)+1)
                {
                    printf("%d is the majority element and it is present %d times in the array\n",*ptr,count);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("In the given array no majority element is present.\n");
            }
        }
        break;
    }
    return 0;
}      