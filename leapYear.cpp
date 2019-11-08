///A program to determine a year is a leap year or not;
#include<stdio.h>
int main()
{
    int year;

    printf("Enter a year: ");

    scanf("%d",&year);

    if(year % 400 == 0)
        printf("The year : %d a leap year.\n",year);

    else if(year % 100 != 0 && year % 4 == 0)
        printf("The year : %d a leap year.\n",year);

    else
        printf("The year : %d is NOT a leap year.\n",year);

    return 0;
}
