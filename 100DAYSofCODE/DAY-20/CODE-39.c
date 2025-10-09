#include <stdio.h>

int main() {
    int n, product = 1, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original_number = n;

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product = product * remainder;
        }
        n = n / 10;
    }

    printf("Product of odd digits of %d = %d\n", original_number, product);

    return 0;
}

