///A program to find out the area of cylinder
#include<stdio.h>
#define pi 3.1416
int main()
{
    float radius,height,sum;

    printf("Enter the values for area of a cylinder:\n");

    printf("radius: ");
    scanf("%f",&radius);

    printf("height: ");
    scanf("%f",&height);

    sum = pi * radius*radius * height;

    printf("The area of the cylinder : %.3f\n",sum);

    return 0;
}
