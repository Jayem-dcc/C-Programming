///A program to find out the area of Triangle
#include<stdio.h>
int main()
{
    float  area,base,height;
    printf("Enter the values of base and height for a triangle:\n");

    scanf("%f%f",&base,&height);

    area = .5 * base * height;

    printf("Area of a triangle : %.3f\n",area);
    return 0;
}
