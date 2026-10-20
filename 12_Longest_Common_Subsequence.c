#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char X[MAX], Y[MAX], lcs[MAX];
    int L[MAX + 1][MAX + 1];

    printf("Enter first string: ");
    scanf("%99s", X);
    printf("Enter second string: ");
    scanf("%99s", Y);

    int m = strlen(X), n = strlen(Y);

    for (int i = 0; i <= m; i++)
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = (L[i - 1][j] > L[i][j - 1]) ? L[i - 1][j] : L[i][j - 1];
        }

    /* trace back to build the LCS string */
    int index = L[m][n];
    lcs[index] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[--index] = X[i - 1];
            i--; j--;
        } else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    printf("Length of LCS = %d\n", L[m][n]);
    printf("LCS = %s\n", lcs);
    return 0;
}
