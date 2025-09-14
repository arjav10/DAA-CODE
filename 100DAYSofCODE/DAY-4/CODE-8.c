/*Write a program to find and display the sum of the first n natural numbers.*/

#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter the positive integer:");
    scanf("%d",&n);
    if (n<=0){
        printf("Please enter a positive integer\n");
        return 1;

    }
    printf("The sum of the first %d natural numbers is %d\n", n, sum);
return 0;
}