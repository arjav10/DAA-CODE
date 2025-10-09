#include <stdio.h>
#include <math.h>

int main() {
    int n, original_number, remainder, n_digits = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_number = n;

    int temp_n = n;
    if (temp_n == 0) {
        n_digits = 1;
    } else {
        while (temp_n != 0) {
            temp_n /= 10;
            ++n_digits;
        }
    }
    
    temp_n = n;

    while (temp_n != 0) {
        remainder = temp_n % 10;
        result += pow(remainder, n_digits);
        temp_n /= 10;
    }

    if ((int)result == original_number) {
        printf("%d is an Armstrong number.\n", original_number);
    } else {
        printf("%d is not an Armstrong number.\n", original_number);
    }

    return 0;
}

