#include <stdio.h>
#define MAX 100
#define INF 99999

typedef struct {
    int src, dest, weight;
} Edge;

int main() {
    int V, E, source;
    Edge edges[MAX];
    int dist[MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &V);
    printf("Enter number of edges: ");
    scanf("%d", &E);
    printf("Enter each edge as: source destination weight\n");
    for (int i = 0; i < E; i++)
        scanf("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    printf("Enter source vertex: ");
    scanf("%d", &source);

    for (int i = 0; i < V; i++)
        dist[i] = INF;
    dist[source] = 0;

    /* relax all edges V-1 times */
    for (int i = 1; i <= V - 1; i++)
        for (int j = 0; j < E; j++) {
            int u = edges[j].src, v = edges[j].dest, w = edges[j].weight;
            if (dist[u] != INF && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }

    /* check for negative weight cycles */
    for (int j = 0; j < E; j++) {
        int u = edges[j].src, v = edges[j].dest, w = edges[j].weight;
        if (dist[u] != INF && dist[u] + w < dist[v]) {
            printf("Graph contains a negative weight cycle\n");
            return 0;
        }
    }

    printf("Vertex\tDistance from source %d\n", source);
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF) printf("%d\tINF\n", i);
        else printf("%d\t%d\n", i, dist[i]);
    }
    return 0;
}
