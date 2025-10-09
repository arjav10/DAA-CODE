#include <stdio.h>

int main() {
    int n1, n2, i, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    hcf = 1;

    for (i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }

    lcm = (n1 * n2) / hcf;

    printf("The LCM of %d and %d is %d.\n", n1, n2, lcm);

    return 0;
}

