#include <stdio.h>

int main() {
    char operator;
    double n1, n2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
            break;

        case '/':
            if (n2 != 0.0)
                printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        
        case '%':
            if (n2 != 0.0)
                printf("%d %% %d = %d\n", (int)n1, (int)n2, (int)n1 % (int)n2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            printf("Error! Operator is not correct\n");
    }

    return 0;
}

