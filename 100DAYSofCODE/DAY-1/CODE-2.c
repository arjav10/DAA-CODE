
/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/


#include<stdio.h>
int main()
{
    int n1, n2;
    int sum, product, difference;
    float quotient;
    printf("Enter the 1 number :\n");
    scanf("%d",&n1);
    printf("Enter the 2 number :\n");
    scanf("%d",&n2);
    sum = n1 + n2;
    difference= n1-n2;
    product= n1*n2;
    printf("Sum of the two number %d+%d=%d\n", n1,n2,sum);
    printf("difference of the two number %d-%d=%d\n", n1,n2,difference);
    printf("product of the two number %d*%d=%d\n", n1,n2,product);
    
    if (n2 !=0){
        quotient=(float)n1/n2;
    }
    else{
        printf("division by zero is not possible");
        return 1;
    }
    printf("quotient of two number %.2f\n",quotient);


return 0;
}