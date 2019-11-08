///A program to find out the area of Rectangle
#include<stdio.h>
int main()
{
    float a,b,c;

    printf("Enter the values for find out the area of rectangle:\na: ");
    scanf("%f",&a);

    printf("b: ");
    scanf("%f",&b);

    c = a * b;

    printf("The area of rectangle : %.3f\n",c);

    return 0;
}
