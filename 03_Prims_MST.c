#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define V 100

int minKey(int key[], bool mstSet[], int n) {
    int min = INT_MAX, minIndex = -1;
    for (int v = 0; v < n; v++)
        if (!mstSet[v] && key[v] < min) {
            min = key[v];
            minIndex = v;
        }
    return minIndex;
}

void prim(int graph[V][V], int n) {
    int parent[V], key[V];
    bool mstSet[V];

    for (int i = 0; i < n; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < n - 1; count++) {
        int u = minKey(key, mstSet, n);
        if (u == -1) break;
        mstSet[u] = true;
        for (int v = 0; v < n; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
    }

    int total = 0;
    printf("Edge \tWeight\n");
    for (int i = 1; i < n; i++) {
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
        total += graph[i][parent[i]];
    }
    printf("Total cost of MST = %d\n", total);
}

int main() {
    int n, graph[V][V];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (0 if no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    prim(graph, n);
    return 0;
}
