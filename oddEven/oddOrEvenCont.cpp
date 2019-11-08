///A program to print Even or Odd number up to n.
#include<stdio.h>
int main()
{
    int number,i,test;

    printf("1.Even numbers\n2.Odd numbers\n\nChoose: ");
    scanf("%d",&test);
    printf("Enter the number to get the chosen sequence:\n");
    scanf("%d",&number);

    if(test == 1)
    {
        for(i = 1 ; i <= number; i++)
        {
            if(i % 2 == 0)
                printf("%d ",i);
        }
        printf("\n");
    }

    else if(test == 2)
    {
        for(i = 1 ; i <= number; i++)
        {
            if(i % 2 != 0)
                printf("%d ",i);
        }
        printf("\n");
    }

    else
        printf("You should not do this,please follow the options \t\t-_-\n\n");
    return 0;
}
