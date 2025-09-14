/*Write a program to calculate simple and compound interest for given principal, rate, and time*/
#include<stdio.h>
#include<math.h>

int main()
{
    double p, r, t;
    double SI, CI;
printf("ENTER the principal Amount :\n");
scanf("lf",&p);
printf("ENTER the anual intrest rate :\n");
scanf("lf",&r);
printf("ENTER the time in years:\n");
scanf("lf",&t);

SI = (p*r*t)/100;
CI= p* pow((1+r/100),t)-p;
    
printf("\nSimple Interest = %.2lf\n", SI);
printf("Compound Interest = %.2lf\n", CI);

}