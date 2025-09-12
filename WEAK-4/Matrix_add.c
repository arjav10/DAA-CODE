#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns of matrices (m n): ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], C[m][n];
    int count=0;

    printf("Enter elements of first matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
            count++;
        }
    }
    printf("Resultant Matrix (Addition):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("total addition operation performed:=%d\n",count);

    return 0;
}
