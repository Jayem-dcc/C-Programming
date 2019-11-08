///A program to find out the Range of a Triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;

    printf("Enter the values :\na: ");
    scanf("%f",&a);

    printf("b : ");
    scanf("%f",&b);

    printf("c : ");
    scanf("%f",&c);

    s = (a + b + c)/2;
    a = sqrt( s * (s-a) * (s-b) * (s-c) );

    printf("The area of triangle : %.3f\n",a);

    return 0;
}
