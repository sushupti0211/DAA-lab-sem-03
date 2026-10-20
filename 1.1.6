#include <stdio.h>
#define MAX 20
#define INF 99999

void dijkstra(int G[MAX][MAX], int n, int start) {
    int dist[MAX], visited[MAX] = {0}, pred[MAX];

    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        pred[i] = -1;
    }
    dist[start] = 0;

    for (int count = 0; count < n - 1; count++) {
        int min = INF, u = -1;
        for (int i = 0; i < n; i++)
            if (!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        if (u == -1) break;          /* remaining vertices unreachable */
        visited[u] = 1;

        for (int v = 0; v < n; v++)
            if (!visited[v] && G[u][v] && dist[u] + G[u][v] < dist[v]) {
                dist[v] = dist[u] + G[u][v];
                pred[v] = u;
            }
    }

    printf("Vertex\tDistance\tPath\n");
    for (int i = 0; i < n; i++) {
        if (i == start) continue;
        if (dist[i] == INF) {
            printf("%d\tINF\t\tNo path\n", i);
            continue;
        }
        printf("%d\t%d\t\t%d", i, dist[i], i);
        int j = i;
        while (pred[j] != -1) {
            j = pred[j];
            printf(" <- %d", j);
        }
        printf("\n");
    }
}

int main() {
    int G[MAX][MAX], n, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (0 if no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &G[i][j]);
    printf("Enter source vertex (0 to %d): ", n - 1);
    scanf("%d", &start);
    dijkstra(G, n, start);
    return 0;
}
