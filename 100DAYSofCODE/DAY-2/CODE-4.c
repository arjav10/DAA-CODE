/*Write a program to calculate the area and circumference of a circle given its radius.*/

#include<stdio.h>
#include<math.h>
int main()
{
    double radius;
    double circumference , area;
    printf("Enter the radius of the circle:\n");
    scanf("%lf",&radius);
    area = M_PI * pow(radius, 2);
    circumference = 2 * M_PI * radius;

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);
return 0;
}