#include<stdio.h>
int main(){
    int n;
    int dist[100][100];
    int inf = 999;

    printf("Enter the number of vertices: ");
    scanf("%d",&n);

    printf("adjacency matrix:\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&dist[i][j]);
        }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
     printf("Shortest distance matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == inf)
                printf("inf ");
            else
                printf("%d ", dist[i][j]);
        }
        printf("\n");
    }
    return 0;
}