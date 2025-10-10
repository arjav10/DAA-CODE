#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0) {
        return 0;
    }
    if (wt[n - 1] > W) {
        return knapsack(W, wt, val, n - 1);
    }
    else {
        int value_taken = val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1);

        int value_not_taken = knapsack(W, wt, val, n - 1);

        return max(value_taken, value_not_taken);
    }
}

int main() {
    int n;
    printf("enter the number of items: ");
    scanf("%d", &n);

    int val[n];
    int wt[n];

    printf("enter the value and weight for each item:\n");
    for (int i = 0; i < n; i++) {
        printf("item %d (value weight): ", i + 1);
        scanf("%d %d", &val[i], &wt[i]);
    }

    int W;
    printf("enter the capacity of the knapsack: ");
    scanf("%d", &W);

    int maxVal = knapsack(W, wt, val, n);
    printf("maximum value in Knapsack = %d\n", maxVal);

    return 0;
}