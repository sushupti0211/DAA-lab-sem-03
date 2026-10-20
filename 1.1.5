#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int w[MAX], x[MAX], n, target, found = 0;

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

/* s = sum chosen so far, k = current index, r = sum of remaining elements */
void sumOfSubsets(int s, int k, int r) {
    if (k >= n) return;
    x[k] = 1;
    if (s + w[k] == target) {
        found = 1;
        printf("{ ");
        for (int i = 0; i <= k; i++)
            if (x[i]) printf("%d ", w[i]);
        printf("}\n");
    } else if (k + 1 < n && s + w[k] + w[k + 1] <= target) {
        sumOfSubsets(s + w[k], k + 1, r - w[k]);
    }
    /* exclude w[k] if remaining elements can still reach the target */
    if (k + 1 < n && s + r - w[k] >= target && s + w[k + 1] <= target) {
        x[k] = 0;
        sumOfSubsets(s, k + 1, r - w[k]);
    }
    x[k] = 0;
}

int main() {
    int total = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
        total += w[i];
    }
    printf("Enter the required sum: ");
    scanf("%d", &target);

    qsort(w, n, sizeof(int), cmp);

    printf("Subsets with sum %d:\n", target);
    if (n > 0 && total >= target && w[0] <= target)
        sumOfSubsets(0, 0, total);
    if (!found)
        printf("No subset found\n");
    return 0;
}
