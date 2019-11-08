///A program to find out a number whether Even or Odd.
#include<stdio.h>
int main()
{
    int number;

    printf("Enter a number to determine odd or even: ");
    scanf("%d",&number);

    if(number % 2 == 0)
        printf("The number : %d is even\n",number);
    else
        printf("The number : %d is odd\n",number);
    return 0;
}
