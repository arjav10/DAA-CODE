#include <stdio.h>
#include <string.h>

int main() {
    char binary_number[101];
    int i;
    int is_valid = 1;

    printf("Enter a binary number: ");
    scanf("%s", binary_number);

    for (i = 0; binary_number[i] != '\0'; i++) {
        if (binary_number[i] == '0') {
            binary_number[i] = '1';
        } else if (binary_number[i] == '1') {
            binary_number[i] = '0';
        } else {
            printf("Error: Invalid input. Please enter a valid binary number.\n");
            is_valid = 0;
            break;
        }
    }

    if (is_valid) {
        printf("The 1's complement is: %s\n", binary_number);
    }

    return 0;
}

