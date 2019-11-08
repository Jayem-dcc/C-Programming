///A program to determine a number is Positive or Negative.
#include<stdio.h>
int main()
{
    int number;

    scanf("%d",&number);

    if(number > 0 )
        printf("The number : %d is positive\n",number);


    else
        printf("The number : %d is negative\n",number);
    return 0;
}
