/*Write a program to input two numbers and display their sum.*/



#include<stdio.h>
int main()
{
    int n1, n2, sum;
    printf("Enter the first number:\n");
    scanf("%d",&n1);
    printf("Enter the second number:\n");
    scanf("%d",&n2);
    sum=n1+n2;
    printf("sum of the numbers %d+%d=%d:\n",n1,n2,sum);
    

return 0;
}