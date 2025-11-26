#include <stdio.h>

int main() {
    int V, E;
    int u[100], v[100], w[100];
    int dist[100];
    int INF = 99999;

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    printf("Enter edges (u v weight):\n");
    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &u[i], &v[i], &w[i]);
    }

    int source;
    printf("Enter source vertex: ");
    scanf("%d", &source);

    for (int i = 0; i < V; i++)
        dist[i] = INF;

    dist[source] = 0;

    for (int i = 1; i <= V-1; i++) {
        for (int j = 0; j < E; j++) {
            int from = u[j];
            int to = v[j];
            int wt = w[j];

            if (dist[from] != INF && dist[from] + wt < dist[to]) {
                dist[to] = dist[from] + wt;
            }
        }
    }

    for (int j = 0; j < E; j++) {
        int from = u[j];
        int to = v[j];
        int wt = w[j];

        if (dist[from] != INF && dist[from] + wt < dist[to]) {
            printf("\nNegative weight cycle detected!\n");
            return 0;
        }
    }

    printf("\nShortest distances from source %d:\n", source);
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF)
            printf("%d -> INF\n", i);
        else
            printf("%d -> %d\n", i, dist[i]);
    }

    return 0;
}
