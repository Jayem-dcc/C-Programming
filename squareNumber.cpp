///A program to determine a given number is a Square root or not;
#include<stdio.h>
#include<math.h>
int main()
{
    int number,s;

    printf("Enter the number : ");
    scanf("%d",&number);

    s= sqrt(number);

    if(s*s == number)
    printf("The square root is : %d for the number : %d\n",s,number);
    else
        printf("The number : %d not square root.\n",number);

    return 0;
}
