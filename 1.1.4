#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int src, dest, weight;
} Edge;

int parent[MAX], rnk[MAX];

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);   /* path compression */
    return parent[x];
}

void unionSet(int a, int b) {
    if (rnk[a] < rnk[b]) parent[a] = b;
    else if (rnk[a] > rnk[b]) parent[b] = a;
    else { parent[b] = a; rnk[a]++; }
}

int compareEdges(const void *a, const void *b) {
    return ((Edge *)a)->weight - ((Edge *)b)->weight;
}

int main() {
    int n, cost[MAX][MAX];
    Edge edges[MAX * MAX];
    int edgeCount = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (0 if no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    /* collect each undirected edge once */
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (cost[i][j] != 0) {
                edges[edgeCount].src = i;
                edges[edgeCount].dest = j;
                edges[edgeCount].weight = cost[i][j];
                edgeCount++;
            }

    qsort(edges, edgeCount, sizeof(Edge), compareEdges);

    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rnk[i] = 0;
    }

    int mstEdges = 0, minCost = 0;
    printf("Edges in MST:\n");
    for (int i = 0; i < edgeCount && mstEdges < n - 1; i++) {
        int u = find(edges[i].src);
        int v = find(edges[i].dest);
        if (u != v) {
            printf("Edge %d: (%d, %d) cost: %d\n", mstEdges + 1,
                   edges[i].src, edges[i].dest, edges[i].weight);
            minCost += edges[i].weight;
            unionSet(u, v);
            mstEdges++;
        }
    }
    printf("Minimum cost = %d\n", minCost);
    return 0;
}
