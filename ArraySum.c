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
            int *ptr, *ptr1, variable = 1, search, index;
            for (ptr = array; ptr < array + (size); ptr++)
            {
              printf ("The element %d is :\n", variable);
              variable++;
              scanf ("%d", ptr);
            }
            printf ("The element that we want to search for make the given sum :\n");
            scanf ("%d", &search);
            for (ptr = array; ptr < array + (size-1); ptr++)
            {
                for (ptr1 = array + 1; ptr1 < array + (size); ptr1++)
            	{
            	    if( *(ptr) + *(ptr1) == search )
            	    {
                	      printf("Pair of elements can make the given sum %d by the value of index %d and %d.\n",search, *ptr, *ptr1);
                	      break;
            	    }
            	}
            }
        }
        break;
    }
    return 0;
}      