#include <stdio.h>
#define MAX 50

int adj[MAX][MAX], visited[MAX], n;

void dfs(int u) {
    visited[u] = 1;
    printf("%d ", u);
    for (int v = 0; v < n; v++)
        if (adj[u][v] && !visited[v])
            dfs(v);
}

int main() {
    int start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("DFS traversal: ");
    dfs(start);
    printf("\n");
    return 0;
}
