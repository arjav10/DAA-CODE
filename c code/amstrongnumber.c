#include<stdio.h>
int main()
{
int m, first =0, second = 1, next;
printf("Enter the number of terms: ");
scanf("%d",&m);
 
printf("fibonacci series upto %d terms:\n" ,m);
 
for (int i=0; i < m; i++){
    if (i<=1)
        next = i;
    else{
        next = first + second;
        first = second;
        second = next;

    }
    printf("%d ", next);
}
return 0;
}
