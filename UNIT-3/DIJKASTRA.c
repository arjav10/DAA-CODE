#include <stdio.h>
#include <limits.h>

int minDistance(int dist[], int visited[], int n) {
    int min = INT_MAX, index = -1;

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0 && dist[i] <= min) {
            min = dist[i];
            index = i;
        }
    }
    return index;
}

void dijkstraBruteForce(int n, int graph[n][n], int src) {
    int dist[n], visited[n];

    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, visited, n);
        visited[u] = 1;

        for (int v = 0; v < n; v++) {
            if (!visited[v] &&
                graph[u][v] != 0 &&
                dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex\tDistance from Source %d\n", src);
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\n", i, dist[i]);
    }
}

int main() {
    int n = 6;

    int graph[6][6] = {
        {0, 4, 0, 0, 0, 0},
        {4, 0, 8, 0, 0, 0},
        {0, 8, 0, 7, 2, 4},
        {0, 0, 7, 0, 9, 14},
        {0, 0, 2, 9, 0, 10},
        {0, 0, 4, 14, 10, 0}
    };

    dijkstraBruteForce(n, graph, 0);

    return 0;
}
