/**A program to find out the area of    1.Square
                                        2.Triangle
                                        3.Rectangle
                                        4.Rhombus
                                        5.Cylinder
                                        6.Trapezium
*/
#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main()
{
    int Case,n=1;
    float  area,b,h,length,wide,c, diagonal1,diagonal2, radius, height,side1,side2,sum;

    while(n){
        printf("1.Square\n2.Triangle\n3.Rectangle\n4.Rhombus\n5.Cylinder\n6.Trapezium\n7.exit\n\n");

        printf("Enter your choice: ");
        scanf("%d",&Case);
        if(Case == 1)
        {
            printf("....................Square....................\n");
            printf("Enter the value for square sequentially side1 & side2: ");
            scanf("%f%f",&side1,&side2);
            c = side1 * side2;
            printf("The area of square : %.3f\n\n",c);
        }


        else if(Case == 2)
        {
            printf("....................Triangle....................\n");

            printf("Enter the values for area of a triangle base & height:\n");

            scanf("%f%f",&b,&h);

            area = .5 * b * h;

            printf("Area of a triangle : %.3f\n\n",area);
        }


        else if(Case == 3)
        {
            printf("....................Rectangle....................\n");


            printf("Enter the values for area of rectangle : length & wide: ");
            scanf("%f",&length);

            printf("b: ");
            scanf("%f",&wide);

            c = length * wide;

            printf("The area of rectangle : %.3f\n\n",c);
        }


        else if(Case == 4)
        {
            printf("....................Rhombus....................\n");


            printf("Enter the values for area of rhombus: diagonal1 & diagonal2: ");

            scanf("%f%f",&diagonal1,&diagonal2);

            printf("The area of rambos : %.3f\n\n",diagonal1 * diagonal2);
        }


        else if(Case == 5)
        {
            printf("....................Cylinder....................\n");


            printf("Enter the values for area of a cylinder:\n");

            printf("radius: ");
            scanf("%f",&radius);

            printf("height: ");
            scanf("%f",&height);

            sum = pi * radius*radius * height;

            printf("The area of the cylinder : %.3f\n\n",sum);
        }



        else if(Case == 6)
        {
            printf("....................Trapezium....................\n");


            printf("Enter the two sides and hight for area of trapezium:\n");

            printf("side1: ");
            scanf("%f",&side1);

            printf("side2: ");
            scanf("%f",&side2);

            printf("hight: ");
            scanf("%f",&height);

            sum = .5 * (side1 + side2) * height;

            printf("The area of trapezium : %.3f\n\n",sum);
        }


        else if(Case == 7)
        {
            n = 0;
            printf("Successfully exit !!\n\n");

        }
    }
    return 0;
}
