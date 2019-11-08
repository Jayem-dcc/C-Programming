///A Program to find out the area of trapezium
#include<stdio.h>
int main()
{
    float height,side1,side2,sum;

    printf("Enter the two sides and hight for area of trapezium:\n");

    printf("side1: ");
    scanf("%f",&side1);

    printf("side2: ");
    scanf("%f",&side2);

    printf("hight: ");
    scanf("%f",&height);

    sum = .5 * (side1 + side2) * height;

    printf("The area of trapezium : %.3f\n",sum);
    return 0;
}
