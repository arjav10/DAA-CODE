#include <stdio.h>

int main() {
    int n, reversed_number = 0, remainder, original_number;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original_number = n;

    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    if (original_number == reversed_number) {
        printf("%d is a palindrome.\n", original_number);
    } else {
        printf("%d is not a palindrome.\n", original_number);
    }

    return 0;
}

