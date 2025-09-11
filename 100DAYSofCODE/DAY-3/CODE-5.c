/*Write a program to convert temperature from Celsius to Fahrenheit.*/

#include<stdio.h>
int main()
{
    float c, f ;
    printf("Enter the temp in celcius:\n");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("%.2f celcius s equal to %.2f fahrenheit:\n", c, f);
    return 0;
}