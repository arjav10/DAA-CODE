#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            product *= i;
        }
    }

    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}

