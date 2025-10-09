#include <stdio.h>

int main() {
    int n, i = 0;
    int binaryNum[32]; 

    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    
    int temp_n = n;

    while (temp_n > 0) {
        binaryNum[i] = temp_n % 2;
        temp_n = temp_n / 2;
        i++;
    }

    printf("Binary representation of %d is: ", n);

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}

