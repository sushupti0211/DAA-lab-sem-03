#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

/* 0/1 Knapsack using Dynamic Programming */
int knapsack(int n, int W, int val[], int wt[]) {
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }

    /* trace back the selected items */
    printf("Items selected (1-based): ");
    int w = W;
    for (int i = n; i > 0; i--)
        if (dp[i][w] != dp[i - 1][w]) {
            printf("%d ", i);
            w -= wt[i - 1];
        }
    printf("\n");
    return dp[n][W];
}

int main() {
    int n, W;
    printf("Enter number of items: ");
    scanf("%d", &n);
    int val[n], wt[n];
    printf("Enter values of items: ");
    for (int i = 0; i < n; i++) scanf("%d", &val[i]);
    printf("Enter weights of items: ");
    for (int i = 0; i < n; i++) scanf("%d", &wt[i]);
    printf("Enter knapsack capacity: ");
    scanf("%d", &W);

    int result = knapsack(n, W, val, wt);
    printf("Maximum value = %d\n", result);
    return 0;
}
