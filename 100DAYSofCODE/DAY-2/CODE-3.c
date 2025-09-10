/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include<stdio.h>
int main()
{
    int length, Breath;
    int perimeter, area;
    printf("Enter the length of the rectangle:\n");
    scanf("%d",&length);

    printf("Enter the Breath of the rectangle:\n");
    scanf("%d",&Breath);
    perimeter= 2*(length+Breath);
    area= (length*Breath);
    printf("Perimeter of rectangle is:%d\n",perimeter);
    printf("area of rectangle is:%d\n",area);   
    
return 0;
}