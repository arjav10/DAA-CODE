#include<stdio.h>

void rotate(int n, int matrix [n][n]){
    for(int i = 0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = matrix [i][j];
            matrix[i][j] = matrix [j][i];
            matrix [j][i] = temp;
        }
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<n/2;j++){
            int temp = matrix [i][j];
            matrix[i][j]= matrix[i][n-1-j];
            matrix[i][n-1-j] = temp;
        }
    }
}
 
void printmatrix(int n, int matrix[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",matrix[i][j]);

        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the size of Matrix 'n'\n");
    scanf("%d",&n);

    int matrix[n][n];
    printf("Enter the elements of matrix %d*%d :\n",n,n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&matrix[i][j]);
    }
    
    }


    printf("Given Matrix\n");
    printmatrix(n,matrix);

    printf("\nMatrix after 90 degree rotation:\n");
    rotate(n,matrix);
    printmatrix(n, matrix);
    return 0;
}
