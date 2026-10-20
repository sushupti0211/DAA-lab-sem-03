#include <stdio.h>
#define MAX 16
#define INF 999999

int n, dist[MAX][MAX];
int dp[1 << MAX][MAX], nextCity[1 << MAX][MAX];

/* Held-Karp DP: min cost to visit all cities not in mask, starting at pos, returning to 0 */
int tsp(int mask, int pos) {
    if (mask == (1 << n) - 1)
        return dist[pos][0] ? dist[pos][0] : INF;
    if (dp[mask][pos] != -1)
        return dp[mask][pos];

    int best = INF;
    for (int city = 0; city < n; city++)
        if (!(mask & (1 << city)) && dist[pos][city]) {
            int cost = dist[pos][city] + tsp(mask | (1 << city), city);
            if (cost < best) {
                best = cost;
                nextCity[mask][pos] = city;
            }
        }
    return dp[mask][pos] = best;
}

int main() {
    printf("Enter number of cities (max %d): ", MAX);
    scanf("%d", &n);
    printf("Enter cost matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &dist[i][j]);

    for (int i = 0; i < (1 << n); i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = -1;

    int cost = tsp(1, 0);
    if (cost >= INF) {
        printf("No valid tour exists\n");
        return 0;
    }

    printf("Path: 0");
    int mask = 1, pos = 0;
    while (mask != (1 << n) - 1) {
        pos = nextCity[mask][pos];
        mask |= (1 << pos);
        printf(" -> %d", pos);
    }
    printf(" -> 0\n");
    printf("Minimum cost = %d\n", cost);
    return 0;
}
