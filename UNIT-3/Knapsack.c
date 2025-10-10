#include <stdio.h>
#include <stdlib.h>

struct item {
    int value, weight;
};

int compare(const void *a, const void *b) {
    struct item *itemA = (struct item *)a;
    struct item *itemB = (struct item *)b;
    double ratioA = (double)itemA->value / itemA->weight;
    double ratioB = (double)itemB->value / itemB->weight;
    if (ratioA > ratioB) return -1;
    if (ratioA < ratioB) return 1;
    return 0;
}

double fractionalKnapsack(struct item arr[], int n, int capacity) {
    qsort(arr, n, sizeof(struct item), compare);

    double total = 0.0;
    int currentWei = 0;

    for (int i = 0; i < n; i++) {
        if (currentWei + arr[i].weight <= capacity) {
            currentWei += arr[i].weight;
            total += arr[i].value;
        } else {
           
            int remaining = capacity - currentWei;
            total += arr[i].value * ((double)remaining / arr[i].weight);
            break; 
        }
    }
    return total;
}

int main() {
    int n = 3;
    int capacity = 50;
    struct item arr[3] = {
        {60, 10},
        {100, 20},
        {120, 30},
    };

    double max = fractionalKnapsack(arr, n, capacity);
    printf("maximum value in fractional Knapsack: %.2f\n", max);

    return 0;
}
