#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (3rd variable): a = %d, b = %d\n", a, b);
    int *p = &a, *q = &b;
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("After swapping (pointers): a = %d, b = %d\n", a, b);
    return 0;
}
