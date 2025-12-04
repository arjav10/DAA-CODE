#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int n) {
    int **mat = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        mat[i] = (int*)malloc(n * sizeof(int));
    return mat;
}

void add(int **A, int **B, int **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}
void subtract(int **A, int **B, int **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void strassen(int **A, int **B, int **C, int n) {

    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }

    int k = n / 2;

    int **A11 = allocateMatrix(k);
    int **A12 = allocateMatrix(k);
    int **A21 = allocateMatrix(k);
    int **A22 = allocateMatrix(k);

    int **B11 = allocateMatrix(k);
    int **B12 = allocateMatrix(k);
    int **B21 = allocateMatrix(k);
    int **B22 = allocateMatrix(k);

    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + k];
            A21[i][j] = A[i + k][j];
            A22[i][j] = A[i + k][j + k];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + k];
            B21[i][j] = B[i + k][j];
            B22[i][j] = B[i + k][j + k];
        }

    int **M1 = allocateMatrix(k);
    int **M2 = allocateMatrix(k);
    int **M3 = allocateMatrix(k);
    int **M4 = allocateMatrix(k);
    int **M5 = allocateMatrix(k);
    int **M6 = allocateMatrix(k);
    int **M7 = allocateMatrix(k);

    int **tempA = allocateMatrix(k);
    int **tempB = allocateMatrix(k);

    add(A11, A22, tempA, k);
    add(B11, B22, tempB, k);
    strassen(tempA, tempB, M1, k);

    add(A21, A22, tempA, k);
    strassen(tempA, B11, M2, k);

    subtract(B12, B22, tempB, k);
    strassen(A11, tempB, M3, k);

    subtract(B21, B11, tempB, k);
    strassen(A22, tempB, M4, k);

    add(A11, A12, tempA, k);
    strassen(tempA, B22, M5, k);

    subtract(A21, A11, tempA, k);
    add(B11, B12, tempB, k);
    strassen(tempA, tempB, M6, k);

    subtract(A12, A22, tempA, k);
    add(B21, B22, tempB, k);
    strassen(tempA, tempB, M7, k);

    add(M1, M4, tempA, k);
    subtract(tempA, M5, tempB, k);
    add(tempB, M7, C, k);

    add(M3, M5, C + 0, k);

    add(M2, M4, C + k, k);

    subtract(M1, M2, tempA, k);
    add(tempA, M3, tempB, k);
    add(tempB, M6, C + k + k, k);


}

int main() {
    int n;

    printf("Enter size of matrix (power of 2): ");
    scanf("%d", &n);

    int **A = allocateMatrix(n);
    int **B = allocateMatrix(n);
    int **C = allocateMatrix(n);

    printf("Enter matrix A:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    strassen(A, B, C, n);

    printf("\nResult matrix C:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

