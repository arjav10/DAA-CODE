#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter the rows and coulmns of first matrix (m n)");
    scanf("%d %d",&m, &n);
    printf("Enter the rows and coulmns of second matrix (p q)");
    scanf("%d %d",&p, &q);

    if (n!= p){
        printf("Matrix multiplication not possible! (columns of A != rows of B)\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];
    int count=0;
    printf("Enter elements of first matrix (%d * %d):\n", m ,n );
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter the elements of second matrix (%d*%d):\n",p,q);
    for(int i=0; i<p; i++){
        for(int j=0; j< q; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0; i<m; i++){
        for(int j; j<q; j++){
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
           for (int k = 0; k < n; k++) {
            C[i][j] += A[i][k] * B[k][j];
            count++;
           }
        }
    }

    printf("Resultant Matrix (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("Total multipliction operation performed:=%d\n",count);

    return 0;
}


